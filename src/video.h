#ifndef __VIDEO_H
#define __VIDEO_H
#include "types.h"
bool video_init(int width,int height,const char *title,bool fullscreen);
void video_clear();
void video_swap();
void video_cleanup();
void video_set_window_title(const char *title);
#endif
