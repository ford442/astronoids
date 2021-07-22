#ifndef __CANVAS_H
#define __CANVAS_H
#include "types.h"
#define CANVAS_INVALID_SHAPE -1
struct shape;
struct vec_2d;
void canvas_reset();
int canvas_load_shape(const struct shape *);
void canvas_start_drawing(bool clear);
void canvas_set_colour(float r,float g,float b);
bool canvas_draw_line_segments(int shape,struct vec_2d position,float rotation,struct vec_2d scale);
void canvas_finish_drawing(bool swap);
#endif
