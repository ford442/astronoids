#ifndef __MIXER_H
#define __MIXER_H
#include "types.h"
#define MIXER_DEFAULT -1
#define MIXER_INVALID_CHANNEL -1
#define MIXER_INVALID_SAMPLE -1
bool mixer_init(int num_mixer_channels);
void mixer_set_channel_completion_handler(void (*callback)(int channel));
int mixer_load_sample_from_file(const char *path);
int mixer_play_sample(register int sample);
bool mixer_stop_playing_on_channel(int channel);
void mixer_cleanup();
#endif
