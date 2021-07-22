#ifndef __LOOP_H
#define __LOOP_H
#include "types.h"
typedef void (*main_loop_fn_t)(bool draw);
void set_main_loop(main_loop_fn_t main_loop_fn);
void run_main_loop();
void cancel_main_loop(int exit_code);
#endif
