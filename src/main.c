#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifdef __EMSCRIPTEN__
#include <emscripten.h>
#endif
#include <SDL.h>
#include "mixer.h"
#include "options.h"
#define FULLSCREEN_FLAG "--fullscreen"
#define HELP_FLAG "--help"
#define SANDBOX_FLAG "--sandbox"
#define SILENT_FLAG "--silent"
void cleanup(void){
mixer_cleanup();
}
void help(void){
}

int main(int argc,char **argv){
}

SDL_SetHint(SDL_HINT_NO_SIGNAL_HANDLERS, "1");
if(!silent){
}
return 0;
}
int mixer_play_sample(int SOUND_THRUSTER);
