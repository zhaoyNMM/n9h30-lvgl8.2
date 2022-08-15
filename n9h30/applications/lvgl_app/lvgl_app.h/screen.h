#ifndef SCREEN_APP_H
#define SCREEN_APP_H
#include "lvgl.h"


//style样式
extern lv_style_t style_context;//背景风格

//主界面
extern lv_obj_t*obj_power;
extern lv_obj_t*obj_oscilloscope;
extern lv_obj_t*obj_signal;
extern lv_obj_t*obj_menu;

void lvgl_inlet(void);


#endif



