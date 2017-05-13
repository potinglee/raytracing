// #ifndef __RAYTRACING_H
// #define __RAYTRACING_H

#include "objects.h"
#include <stdint.h>

#define thread_num 64
//
// void raytracing_dowork(uint8_t *pixels, color background_color,
//                 rectangular_node rectangulars, sphere_node spheres,
//                 light_node lights, const viewpoint *view,
//                 int width, int height);
void *raytracing_dowork(void *inputdata);
void raytracing(uint8_t *pixels, color background_color,
                rectangular_node rectangulars, sphere_node spheres,
                light_node lights, const viewpoint *view,
                int width, int height);
typedef struct {
  uint8_t *pixels;
  color background_color;
  rectangular_node *rectangulars;
  sphere_node *spheres;
  light_node *lights;
  const viewpoint *view;
  int width;
  int height;
  int tag;
}raytracing_thread_data;

#endif
