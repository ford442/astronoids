#ifndef __TIMING_H
#define __TIMING_H
#include "types.h"
void reset_simulation_time();
void produce_simulation_time();
bool maybe_consume_simulation_time(uint32_t millis);
uint32_t residual_simulation_time();
#endif
