#include <errno.h>
#include "debug.h"
#include "process_info.h"

int proc_info_get_window_handle(proc_info_t *proc_info, const char *window_title);
int proc_info_get_process_id(proc_info_t *proc_info);
int proc_info_get_process_handle(proc_info_t *proc_info);
int proc_info_close_process_handle(proc_info_t *proc_info);

int proc_info_init(proc_info_t **proc_info, const char *window_title)
{
  int retval;
  proc_info_t *temp_info;

  if (proc_info == 0)
  {
    debug_error("Null process information return pointer");
    return -EINVAL;
  }
  *proc_info = 0;

  if (window_title == 0)
  {
    debug_error("Null window title");
    return -EINVAL;
  }

  if (window_title == 0)
  {
    debug_error("Null window title");
    return -EINVAL;
  }

  if (strcmp(window_title, "") == 0)
  {
    debug_error("Empty process window title");
    return -EINVAL;
  }

  temp_info = malloc(sizeof(proc_info_t));
  if (temp_info == 0)
  {
    debug_error("Failed to allocate memory for proc_info");
    return -ENOMEM;
  }

  if ( (retval = proc_info_get_window_handle(temp_info, window_title)) < 0)
  {
    return retval;
  }

  if ( (retval = proc_info_get_process_id(temp_info)) < 0)
  {
    debug_error("Fail to get window handle");
    return retval;
  }

  if ( (retval = proc_info_get_process_handle(temp_info)) < 0)
  {
    debug_error("Fail to get window handle");
    free(*proc_info);
    return retval;
  }

  *proc_info = temp_info;
  return 0;
}

int proc_info_destroy(proc_info_t **proc_info)
{
  int retval;

  if (proc_info == 0)
  {
    debug_error("Null process information return pointer");
    return -EINVAL;
  }

  if (*proc_info == 0)
  {
    debug_error("Null process information");
    return -EINVAL;
  }

  if ((retval = proc_info_close_process_handle(*proc_info)) < 0)
  {
    debug_error("Fail to close process handle - %d", retval);
  }

  free(*proc_info);
  *proc_info = 0;
  return 0;
}

int proc_info_get_window_handle(proc_info_t *proc_info, const char *window_title)
{
  if (proc_info == NULL)
  {
    debug_error("Null process information");
    return -EINVAL;
  }

  proc_info->window_handle = FindWindow(0, window_title);

  if (proc_info->window_handle == 0)
  {
    debug_error("%s window not found", window_title);
    return -EINVAL;
  }

  debug_verbose("Found %s window", window_title);
  return 0;
}

int proc_info_get_process_id(proc_info_t *proc_info)
{
  if (proc_info->window_handle == 0)
  {
    debug_error("Null window_handle");
    return -EINVAL;
  }

  GetWindowThreadProcessId(proc_info->window_handle, &proc_info->process_id);
  if (proc_info->process_id == 0)
  {
    debug_error("Could not get process id");
    return -ENXIO;
  }

  debug_verbose("Found process id: %lu", proc_info->process_id);
  return 0;
}

int proc_info_get_process_handle(proc_info_t *proc_info)
{
  if (proc_info->process_id == 0)
  {
    debug_error("Null process ID");
    return -EINVAL;
  }

  proc_info->process_handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, proc_info->process_id);

  if (proc_info->process_handle == 0)
  {
    debug_error("Failed to get handle for process");
    return -ENXIO;
  }

  debug_verbose("Open process handle: %u", (unsigned int) proc_info->process_handle);
  return 0;
}

int proc_info_close_process_handle(proc_info_t *proc_info)
{
  if (proc_info == 0)
  {
    debug_error("Null process info");
    return -EINVAL;
  }

  if (proc_info->process_handle == 0)
  {
    debug_error("Bad process handle");
    return -EINVAL;
  }

  CloseHandle(proc_info->process_handle);
  proc_info->process_handle = 0;
  debug_verbose("Closed process handle: %u", (unsigned int) proc_info->process_handle);

  return 0;
}

