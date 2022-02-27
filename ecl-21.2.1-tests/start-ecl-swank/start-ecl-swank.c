#include <ecl/ecl.h>

/* init-name */
#define __cl_init_name init_lib_LISP_ENVI

// copy packages.lisp
//      backend.lisp
// copy swank folder

//Signature: cl_object cl_load(cl_arg narg, cl_object path);
//Usage: cl_load(1, c_string_to_object("./lisp_image.fasb"));

int app_main(void);

int main()
{
  return app_main();
}

void run_swank();

int app_main(void)
{
  char* argv = "app";
  char** pargv = &argv;
  char pcSwankFasb[] = "\"swank--all-systems.fasb\"";

  // (require :swank--all-systems)
  // (load (merge-pathnames "swank--all-systems.fasb"))
  // (swank-loader:init
  //  :delete nil         ; delete any existing SWANK packages
  //  :reload nil         ; reload SWANK, even if the SWANK package already exists
  //  :load-contribs nil  ; load all contribs
  //  :from-emacs nil)    ; not started from emacs
  // (swank:create-server :port (parse-integer (my-getenv "SWANK_PORT" "4005")) :dont-close t)
  cl_boot(1, pargv);
  atexit(cl_shutdown);
  cl_object cl_swank_fasb = ecl_read_from_cstring(pcSwankFasb);
  //cl_load(1, "swank--all-systems.fasb");

  /* Set up handler for Lisp errors to prevent buggy Lisp (an */
  /* imposibility, I know!) from killing the app. */
  const cl_env_ptr l_env = ecl_process_env();
  CL_CATCH_ALL_BEGIN(l_env) {
    CL_UNWIND_PROTECT_BEGIN(l_env) {
      run_swank();
      //cl_load(1, cl_swank_fasb);
      //cl_load(1, cl_swank_fasb);
    }
    CL_UNWIND_PROTECT_EXIT {}
    CL_UNWIND_PROTECT_END;
  }
  CL_CATCH_ALL_END;

  return 0;
}

void run_swank() {
  /* TODO: Are embedded quotes really needed? */
  char start_swank[] = "\"launch-swank.lisp\"";

  // DEPRECATED @coderef{c_string_to_object} – equivalent to @coderef{ecl_read_from_cstring}
  //cl_object cl_start_swank_path = c_string_to_object(start_swank); 
  cl_object cl_start_swank_path = ecl_read_from_cstring(start_swank);
  cl_object cl_load =  ecl_make_symbol("LOAD","CL");
  cl_funcall(2, cl_load, cl_start_swank_path);
  return;
}

#if 0
void run_swank() {
  /* TODO: Are embedded quotes really needed? */
  char start_swank[] = "\"start-swank-server.lisp\"";

  // DEPRECATED @coderef{c_string_to_object} – equivalent to @coderef{ecl_read_from_cstring}
  //cl_object cl_start_swank_path = c_string_to_object(start_swank); 
  cl_object cl_start_swank_path = ecl_read_from_cstring(start_swank);
  cl_object cl_load =  ecl_make_symbol("LOAD","CL");
  cl_funcall(2, cl_load, cl_start_swank_path);
  return;
}
#endif

//void init_cl_env(int argc, char * argv[]){
//  /* Initialize CL environment */
//  cl_boot(argc, argv);
//  ecl_init_module(NULL, __cl_init_name);
//  /* load fasb */
//  cl_eval("load", CL_MAIN_FASB);
//  /* set context to current package */
//  cl_eval("in-package", CL_MAIN_PACKAGE_NAME);
//  /* hook for shutting down cl env */
//  atexit(cl_shutdown);
//}

#undef __cl_init_name
