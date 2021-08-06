#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifdef __EMSCRIPTEN__
#include <emscripten.h>
#endif
#include <SDL.h>
#include "mixer.h"
#include "options.h"
#define SOUND_THRUSTER 4

void cleanup(void){
mixer_cleanup();
}
void help(void){
}
int main(int argc,char **argv){
int x=mixer_play_sample(AUDIO_FILES[4]);
return 0;
}

