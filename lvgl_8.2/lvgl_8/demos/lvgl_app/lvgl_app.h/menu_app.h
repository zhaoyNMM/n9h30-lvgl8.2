#ifndef MENU_APP_H
#define MENU_APP_H
#include "lvgl.h"


void  menu_init(lv_obj_t*obj);

void btn_init(lv_obj_t*obj)  ;
void uart_init(lv_obj_t*obj);
void lan_init(lv_obj_t*obj);
void gpib_init(lv_obj_t*obj);

#endif
