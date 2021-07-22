#ifndef __VEC_H
#define __VEC_H
struct vec_2d{
float x;
float y;
};
extern const struct vec_2d vec_2d_unit;
extern const struct vec_2d vec_2d_zero;
float vec_2d_dot(const struct vec_2d *u,const struct vec_2d *v);
float vec_2d_magnitude(const struct vec_2d *v);
float vec_2d_normalise(struct vec_2d *v);
struct vec_2d vec_2d_normalised(const struct vec_2d *v);
void vec_2d_scale(struct vec_2d *v,float f);
#endif
