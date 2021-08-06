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
SDL_Quit();
}
void help(void){
printf("\nAvailable options:\n\n");
printf(" " FULLSCREEN_FLAG "\n");
printf(" " HELP_FLAG "\n");
printf(" " SANDBOX_FLAG "\n");
printf(" " SILENT_FLAG "\n");
exit(0);
}

int main(int argc,char **argv){
bool fullscreen=false;
bool sandbox=false;
bool silent=false;
if(argc > 1){
for (int i=1; i < argc; ++i){
if(strcmp(argv[i],FULLSCREEN_FLAG) == 0){
fullscreen=true;
} else if(strcmp(argv[i],HELP_FLAG) == 0){
help();
} else if(strcmp(argv[i],SANDBOX_FLAG) == 0){
sandbox=true;
} else if(strcmp(argv[i],SILENT_FLAG) == 0){
silent=true;
} else{
fprintf(stderr,"unrecognised option: %s\n",argv[i]);
}
}
}
atexit(cleanup);
SDL_Init(0);
#ifdef __EMSCRIPTEN__
SDL_SetHint(SDL_HINT_NO_SIGNAL_HANDLERS, "1");
#endif
if(!silent){
if(false == mixer_init(MIXER_DEFAULT)){
exit(1);
}
}
if(false == game_init(silent)){
exit(1);
}
return 0;
}
mixer_play_sample(SOUND_THRUSTER);
