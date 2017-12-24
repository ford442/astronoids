#include "options.h"

const float
    _ast0[] = { 9.0f, -.02f, -.04f, .00f, -.03f, .02f, -.04f, .04f, -.02f, .03f,  .00f, .04f, .02f,  .00f, .04f, -.04f, .02f, -.04f, -.02f},
    _ast1[] = {12.0f, -.02f, -.04f, .00f, -.03f, .02f, -.04f, .04f, -.02f, .02f, -.01f, .04f, .01f,  .02f, .04f, -.01f, .03f, -.02f,  .04f, -.04f,  .02f, -.03f,  .00f, -.04f, -.02f},
    _ast2[] = {11.0f, -.01f, -.04f, .02f, -.04f, .04f, -.01f, .04f,  .01f, .02f,  .04f, .00f, .04f,  .00f, .01f, -.02f, .04f, -.04f,  .01f, -.02f,  .00f, -.04f, -.01f},
    _ast3[] = {12.0f, -.02f, -.04f, .01f, -.04f, .04f, -.02f, .04f, -.01f, .01f,  .00f, .04f, .02f,  .02f, .04f,  .01f, .03f, -.02f,  .04f, -.04f,  .01f, -.04f, -.01f, -.01f, -.02f};

const float * _asteroids[ASTEROID_SHAPES] = {
    _ast0,
    _ast1,
    _ast2,
    _ast3
};

const float
    _a[] = { 7.0f, .00f,  .06f, .00f,  .02f,  .015f, .00f, .03f,  .02f, .03f,  .06f, .03f, .03f, .00f, .03f},
    _b[] = {12.0f, .00f,  .06f, .00f,  .00f,  .02f,  .00f, .03f,  .01f, .03f,  .02f, .02f, .03f, .00f, .03f,  .02f, .03f, .03f, .04f, .03f, .05f, .02f, .06f, .00f, .06f},
    _c[] = { 6.0f, .03f,  .00f, .01f,  .00f,  .00f,  .01f, .00f,  .05f, .01f,  .06f, .03f, .06f},
    _d[] = { 7.0f, .00f,  .00f, .02f,  .00f,  .03f,  .01f, .03f,  .05f, .02f,  .06f, .00f, .06f, .00f, .00f},
    _e[] = { 7.0f, .03f,  .00f, .00f,  .00f,  .00f,  .03f, .02f,  .03f, .00f,  .03f, .00f, .06f, .03f, .06f},
    _f[] = { 6.0f, .03f,  .00f, .00f,  .00f,  .00f,  .03f, .02f,  .03f, .00f,  .03f, .00f, .06f},
    _g[] = {10.0f, .03f,  .01f, .02f,  .00f,  .01f,  .00f, .00f,  .01f, .00f,  .05f, .01f, .06f, .02f, .06f,  .03f, .05f, .03f, .04f, .02f, .04f},
    _h[] = { 6.0f, .00f,  .00f, .00f,  .06f,  .00f,  .03f, .03f,  .03f, .03f,  .00f, .03f, .06f},
    _i[] = { 6.0f, .00f,  .00f, .03f,  .00f,  .015f, .00f, .015f, .06f, .00f,  .06f, .03f, .06f},
    _j[] = { 5.0f, .01f,  .00f, .03f,  .00f,  .03f,  .06f, .01f,  .06f, .00f,  .05f},
    _k[] = { 6.0f, .00f,  .00f, .00f,  .06f,  .00f,  .03f, .03f,  .00f, .00f,  .03f, .03f, .06f},
    _l[] = { 3.0f, .00f,  .00f, .00f,  .06f,  .03f,  .06f},
    _m[] = { 5.0f, .00f,  .06f, .00f,  .00f,  .015f, .02f, .03f,  .00f, .03f,  .06f},
    _n[] = { 4.0f, .00f,  .06f, .00f,  .00f,  .03f,  .06f, .03f,  .00f},
    _o[] = { 5.0f, .00f,  .00f, .03f,  .00f,  .03f,  .06f, .00f,  .06f, .00f,  .00f},
    _p[] = { 5.0f, .00f,  .06f, .00f,  .00f,  .03f,  .00f, .03f,  .03f, .00f,  .03f},
    _q[] = { 9.0f, .02f,  .05f, .025f, .055f, .02f,  .06f, .00f,  .06f, .00f,  .00f, .03f, .00f, .03f, .05f, .025f, .055f, .03f, .06f},
    _r[] = { 7.0f, .00f,  .06f, .00f,  .00f,  .03f,  .00f, .03f,  .03f, .00f,  .03f, .01f, .03f, .03f, .06f},
    _s[] = { 6.0f, .03f,  .00f, .00f,  .00f,  .00f,  .03f, .03f,  .03f, .03f,  .06f, .00f, .06f},
    _t[] = { 4.0f, .00f,  .00f, .03f,  .00f,  .015f, .00f, .015f, .06f},
    _u[] = { 4.0f, .00f,  .00f, .00f,  .06f,  .03f,  .06f, .03f,  .00f},
    _v[] = { 3.0f, .00f,  .00f, .015f, .06f,  .03f,  .00f},
    _w[] = { 5.0f, .00f,  .00f, .00f,  .06f,  .015f, .04f, .03f,  .06f, .03f,  .00f},
    _x[] = { 5.0f, .00f,  .00f, .03f,  .06f,  .015f, .03f, .03f,  .00f, .00f,  .06f},
    _y[] = { 5.0f, .00f,  .00f, .015f, .03f,  .03f,  .00f, .015f, .03f, .015f, .06f},
    _z[] = { 4.0f, .00f,  .00f, .03f,  .00f,  .00f,  .06f, .03f,  .06f},
    _0[] = { 6.0f, .00f,  .00f, .03f,  .00f,  .03f,  .06f, .00f,  .06f, .00f,  .00f, .03f, .06f},
    _1[] = { 2.0f, .015f, .00f, .015f, .06f},
    _2[] = { 6.0f, .00f,  .00f, .03f,  .00f,  .03f,  .03f, .00f,  .03f, .00f,  .06f, .03f, .06f},
    _3[] = { 7.0f, .00f,  .00f, .03f,  .00f,  .03f,  .03f, .00f,  .03f, .03f,  .03f, .03f, .06f, .00f, .06f},
    _4[] = { 5.0f, .00f,  .00f, .00f,  .03f,  .03f,  .03f, .03f,  .00f, .03f,  .06f},
    _5[] = { 6.0f, .03f,  .00f, .00f,  .00f,  .00f,  .03f, .03f,  .03f, .03f,  .06f, .00f, .06f},
    _6[] = { 7.0f, .03f,  .00f, .01f,  .00f,  .00f,  .01f, .00f,  .06f, .03f,  .06f, .03f, .03f, .00f, .03f},
    _7[] = { 3.0f, .00f,  .00f, .03f,  .00f,  .03f,  .06f},
    _8[] = { 8.0f, .00f,  .03f, .00f,  .00f,  .03f,  .00f, .03f,  .03f, .00f,  .03f, .00f, .06f, .03f, .06f,  .03f, .03f},
    _9[] = { 6.0f, .03f,  .06f, .03f,  .03f,  .00f,  .03f, .00f,  .00f, .03f,  .00f, .03f, .03f},
    __[] = { 2.0f, .00f,  .06f, .03f,  .06f},

    _minus[] = { 2.0f, .00f, .03f, .03f, .03f};

const float *_font[256] = {

    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   /* 00 - 0F */
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   /* 10 - 1F */
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,            /* 20 - 2C */

    _minus, 0, 0,           /* 2D - 2F */

    _0,     /* 30 */
    _1,     /* 31 */
    _2,     /* 32 */
    _3,     /* 33 */
    _4,     /* 34 */
    _5,     /* 35 */
    _6,     /* 36 */
    _7,     /* 37 */
    _8,     /* 38 */
    _9,     /* 39 */

    0, 0, 0, 0, 0, 0, 0,    /* 3A - 40 */

    _a,     /* 41 */
    _b,     /* 42 */
    _c,     /* 43 */
    _d,     /* 44 */
    _e,     /* 45 */
    _f,     /* 46 */
    _g,     /* 47 */
    _h,     /* 48 */
    _i,     /* 49 */
    _j,     /* 4A */
    _k,     /* 4B */
    _l,     /* 4C */
    _m,     /* 4D */
    _n,     /* 4E */
    _o,     /* 4F */
    _p,     /* 50 */
    _q,     /* 51 */
    _r,     /* 52 */
    _s,     /* 53 */
    _t,     /* 54 */
    _u,     /* 55 */
    _v,     /* 56 */
    _w,     /* 57 */
    _x,     /* 58 */
    _y,     /* 59 */
    _z,     /* 5A */

    0, 0, 0, 0, __, 0, 0,   /* 5B - 60 */

    _a,     /* 61 */
    _b,     /* 62 */
    _c,     /* 63 */
    _d,     /* 64 */
    _e,     /* 65 */
    _f,     /* 66 */
    _g,     /* 67 */
    _h,     /* 68 */
    _i,     /* 69 */
    _j,     /* 6A */
    _k,     /* 6B */
    _l,     /* 6C */
    _m,     /* 6D */
    _n,     /* 6E */
    _o,     /* 6F */
    _p,     /* 70 */
    _q,     /* 71 */
    _r,     /* 72 */
    _s,     /* 73 */
    _t,     /* 74 */
    _u,     /* 75 */
    _v,     /* 76 */
    _w,     /* 77 */
    _x,     /* 78 */
    _y,     /* 79 */
    _z      /* 7A */

};

