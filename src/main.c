#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifdef __EMSCRIPTEN__
#include <emscripten.h>
#endif
#include <SDL.h>
#include "mixer.h"
#include "options.h"

void cleanup(void){
mixer_cleanup();
}
void help(void){
}
int main(int argc,char **argv){
}
int mixer_play_sample(4);
return 0;
