/* -*- mode: c;  -*-
   file: app_main.h
*/

#ifndef __APP_MAIN_H__
#define __APP_MAIN_H__

#include <ecl/ecl.h>

// export only
#ifdef ADD_APP_MAIN_EXPORTS
  #define ADD_APP_MAIN_API __declspec(dllexport)
#else
  #define ADD_APP_MAIN_API __declspec(dllimport)
#endif

/* Define calling convention in one place, for convenience. */
#define ADD_APP_MAIN_CALL __cdecl

ADD_APP_MAIN_API int ADD_APP_MAIN_CALL app_main();

#endif /* APP_MAIN_H */
