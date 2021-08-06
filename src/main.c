#define SOUND_THRUSTER 4
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <emscripten.h>
#include <SDL.h>
#include "loop.h"
#include "mixer.h"
#include "options.h"
#include "types.h"
#define MAX_SAMPLES 20
static const char *AUDIO_FILES[]={
"assets/beat1.wav",
"assets/beat2.wav",
"assets/explosion.wav",
"assets/phaser.wav",
"assets/thruster.wav"
};
static const int NUM_SAMPLES=sizeof(AUDIO_FILES) / sizeof(AUDIO_FILES[0]);
static int samples[MAX_SAMPLES];
int explosion_channel=-1;
int phaser_channel=-1;
int thruster_channel=-1;
static bool load_samples(){
memset(samples,0,sizeof(int) * MAX_SAMPLES);
for (int i=0; i < NUM_SAMPLES; ++i){
samples[i]=mixer_load_sample_from_file(AUDIO_FILES[i]);
if(MIXER_INVALID_SAMPLE == samples[i]){
return false;
}
}
return true;
}
static void mixer_channel_complete(int channel){
if(channel == explosion_channel){
explosion_channel=-1;
} else if(channel == phaser_channel){
phaser_channel=-1;
} else if(channel == thruster_channel){
thruster_channel=-1;
}
}
bool game_init(bool silent){

if(!silent){
mixer_set_channel_completion_handler(mixer_channel_complete);
if(!load_samples()){
return false;
}
}
return true;
}
void game_cleanup(){
mixer_set_channel_completion_handler(NULL);
}
void game_play(bool sandbox){
if(sandbox){
} else{
}
run_main_loop();
}




void cleanup(void){
mixer_cleanup();
}
void help(void){
}
int main(int argc,char **argv){
mixer_play_sample(AUDIO_FILES[4]);
return 0;
}

