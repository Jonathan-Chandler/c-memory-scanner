/* -*- mode: c;  -*-
   file: app_main.h
*/

#ifndef __APP_MAIN_H__
#define __APP_MAIN_H__

#include <ecl/ecl.h>

// import only
#define ADDAPI __declspec(dllimport)

/* Define calling convention in one place, for convenience. */
#define ADDCALL __cdecl

ADDAPI int ADDCALL app_main();

#endif /* APP_MAIN_H */

