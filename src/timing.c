#include <stdbool.h>
#include <stdint.h>

#include <SDL.h>

static uint32_t simulation_time = 0.f;
static uint32_t ticks;

/******************************************************************************
 *
 * Public interface
 *
 *****************************************************************************/

void reset_simulation_time()
{
    ticks = SDL_GetTicks();
    simulation_time = 0.f;
}

void produce_simulation_time()
{
    const uint32_t now = SDL_GetTicks();
    if (now < ticks) {
        simulation_time += UINT32_MAX - ticks;
        ticks = 0;
    }

    simulation_time += now - ticks;
    ticks = now;
}

bool maybe_consume_simulation_time(uint32_t millis)
{
    if (millis > simulation_time) {
      return false;
    }

    simulation_time -= millis;
    return true;
}

uint32_t residual_simulation_time()
{
    return simulation_time;
}
