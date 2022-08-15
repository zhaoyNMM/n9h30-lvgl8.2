#include "demos/lvgl_app/lvgl_app.h/screen.h"
#include "lvgl.h"



LV_IMG_DECLARE(power_host );

 lv_style_t style_power_Font1;
 lv_style_t style_power_Font2;
 lv_style_t style_power_Font3;
 lv_style_t style_power_Font4;
 lv_style_t style_power_Font5;
 lv_style_t style_power_Font6;



 lv_obj_t* label_ch1_v;
 lv_obj_t* label_ch1_i;
 lv_obj_t* label_ch1_w;
 lv_obj_t* label_ch1_cc_cv;
 lv_obj_t* label_ch1_ocp;
 lv_obj_t* label_ch1_ovp;

 lv_obj_t* label_ch2_v;
 lv_obj_t* label_ch2_i;
 lv_obj_t* label_ch2_w;
 lv_obj_t* label_ch2_cc_cv;
 lv_obj_t* label_ch2_ocp;
 lv_obj_t* label_ch2_ovp;


 void lvgl_power_style(void)
 {

         //字体
     lv_style_init(&style_power_Font1);/* 样式初始化 */
     lv_style_set_text_color(&style_power_Font1, lv_color_white());//设置字体颜色
     lv_style_set_text_font(&style_power_Font1, &lv_font_montserrat_46); /* 设置风格字体 */

     lv_style_init(&style_power_Font2);/* 样式初始化 */
     lv_style_set_text_color(&style_power_Font2, lv_color_white());//设置字体颜色
     lv_style_set_text_font(&style_power_Font2, &lv_font_montserrat_26); /* 设置风格字体 */

     lv_style_init(&style_power_Font3);/* 样式初始化 */
     lv_style_set_text_color(&style_power_Font3, lv_color_white());//设置字体颜色
     lv_style_set_text_font(&style_power_Font3, &lv_font_montserrat_14); /* 设置风格字体 */

     lv_style_init(&style_power_Font4);/* 样式初始化 */
     lv_style_set_text_color(&style_power_Font4, lv_color_white());//设置字体颜色
     lv_style_set_text_font(&style_power_Font4, &lv_font_montserrat_22); /* 设置风格字体 */



     lv_style_init(&style_power_Font5);/* 样式初始化 */
     lv_style_set_text_color(&style_power_Font5, lv_color_make(0x7e, 0xce, 0xf4));//设置字体颜色
     lv_style_set_text_font(&style_power_Font5, &lv_font_montserrat_14); /* 设置风格字体 */

     lv_style_init(&style_power_Font6);/* 样式初始化 */
     lv_style_set_text_color(&style_power_Font6, lv_color_make(0x87, 0x97, 0xcb));//设置字体颜色
     lv_style_set_text_font(&style_power_Font6, &lv_font_montserrat_14); /* 设置风格字体 */


 }

 static void event_switch_cb1(lv_event_t* e)
 {
         lv_obj_t* switch_obj = lv_event_get_target(e);

     bool reverse = lv_obj_has_state(switch_obj, LV_STATE_CHECKED);
     if(reverse)
     {
         lv_label_set_text(label_ch1_v, "29.9999");
         lv_label_set_text(label_ch1_i, "0.0002");
         lv_obj_add_style(label_ch1_cc_cv, &style_power_Font5, 0);
     }
     else
     {

         lv_label_set_text(label_ch1_v, "30.0000");
         lv_label_set_text(label_ch1_i, "4.0000");
         lv_obj_add_style(label_ch1_cc_cv, &style_power_Font3, 0);

     }
 }

 static void event_switch_cb2(lv_event_t* e)
 {
     lv_obj_t* switch_obj = lv_event_get_target(e);

     bool reverse = lv_obj_has_state(switch_obj, LV_STATE_CHECKED);
     if(reverse)
     {
         lv_label_set_text(label_ch2_v, "29.9998");
         lv_label_set_text(label_ch2_i, "0.0003");
         lv_obj_add_style(label_ch2_cc_cv, &style_power_Font6, 0);
     }
     else
     {
     lv_label_set_text(label_ch2_v, "30.0000");
     lv_label_set_text(label_ch2_i, "4.0000");
     lv_obj_add_style(label_ch2_cc_cv, &style_power_Font3, 0);
     }
 }
void power_init(lv_obj_t*obj)
{
    lvgl_power_style();

    lv_obj_t*power_img = lv_img_create(obj);//创建图片控件
    lv_img_set_src(power_img, &power_host );//设置图片
    lv_obj_align(power_img, LV_ALIGN_TOP_MID, 0, 0);//位置

    
    

    lv_obj_t* switch_ch1 = lv_switch_create(power_img);
    lv_obj_set_width(switch_ch1, 60);    /* 设置开关宽度 */
    lv_obj_set_height(switch_ch1, 20);   /* 设置开关高度 */
    lv_obj_add_event_cb(switch_ch1, event_switch_cb1, LV_EVENT_VALUE_CHANGED, switch_ch1);
    lv_obj_align(switch_ch1, LV_ALIGN_CENTER, -90, 158);  /* 设置开关位置 */

    lv_obj_t* switch_ch2 = lv_switch_create(power_img);
    lv_obj_set_width(switch_ch2, 60); /* 设置开关宽度 */
    lv_obj_set_height(switch_ch2, 20);/* 设置开关高度 */
    lv_obj_add_event_cb(switch_ch2, event_switch_cb2, LV_EVENT_VALUE_CHANGED, switch_ch2);
    lv_obj_align(switch_ch2, LV_ALIGN_CENTER, 320, 158);/* 设置开关位置 */


    label_ch1_v = lv_label_create(power_img); /* 创建文本字体 电压电流*/
    lv_obj_add_style(label_ch1_v, &style_power_Font1, 0);
    lv_obj_set_width(label_ch1_v, 190); /* 设置开关宽度 */
    lv_obj_set_height(label_ch1_v, 35); /* 标签长文本自动扩展高度 */
    lv_obj_set_style_text_align(label_ch1_v, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
    lv_label_set_text(label_ch1_v, "30.0000");/* 设置标签文本 */
    lv_obj_align(label_ch1_v, LV_ALIGN_CENTER, -215, -97);/* 设置标签位置 */

    label_ch1_i = lv_label_create(power_img); /* 创建文本字体 电压电流*/
    lv_obj_add_style(label_ch1_i, &style_power_Font1, 0);
    lv_obj_set_width(label_ch1_i, 190); /* 设置开关宽度 */
    lv_obj_set_height(label_ch1_i, 35); /* 标签长文本自动扩展高度 */
    lv_obj_set_style_text_align(label_ch1_i, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
    lv_label_set_text(label_ch1_i, "4.0000");/* 设置标签文本 */
    lv_obj_align_to(label_ch1_i,label_ch1_v, LV_ALIGN_OUT_BOTTOM_RIGHT, 0, 58);/* 设置标签位置 */

    label_ch1_w = lv_label_create(power_img); /* 创建文本字体 电压电流*/
    lv_obj_add_style(label_ch1_w, &style_power_Font1, 0);
    lv_obj_set_width(label_ch1_w, 190); /* 设置开关宽度 */
    lv_obj_set_height(label_ch1_w, 35); /* 标签长文本自动扩展高度 */
    lv_obj_set_style_text_align(label_ch1_w, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
    lv_label_set_text(label_ch1_w, "0.0000");/* 设置标签文本 */
    lv_obj_align_to(label_ch1_w,label_ch1_i, LV_ALIGN_OUT_BOTTOM_RIGHT, 0, 58);/* 设置标签位置 */



        lv_obj_t* label_ch1_v_u = lv_label_create(power_img); /* 创建文本字体 电压电流*/
        lv_obj_add_style(label_ch1_v_u, &style_power_Font2, 0);
        lv_obj_set_style_text_align(label_ch1_v_u, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
        lv_label_set_text(label_ch1_v_u, "V");/* 设置标签文本 */
        lv_obj_align(label_ch1_v_u, LV_ALIGN_CENTER, -100, -90);/* 设置标签位置 */

        lv_obj_t*label_ch1_i_u = lv_label_create(power_img); /* 创建文本字体 电压电流*/
        lv_obj_add_style(label_ch1_i_u, &style_power_Font2, 0);
        lv_obj_set_style_text_align(label_ch1_i_u, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
        lv_label_set_text(label_ch1_i_u, "A");/* 设置标签文本 */
        lv_obj_align_to(label_ch1_i_u,label_ch1_v_u, LV_ALIGN_OUT_BOTTOM_RIGHT, 0, 62);/* 设置标签位置 */

        lv_obj_t* label_ch1_w_u = lv_label_create(power_img); /* 创建文本字体 电压电流*/
        lv_obj_add_style(label_ch1_w_u, &style_power_Font2, 0);
        lv_obj_set_style_text_align(label_ch1_w_u, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
        lv_label_set_text(label_ch1_w_u, "W");/* 设置标签文本 */
        lv_obj_align_to(label_ch1_w_u,label_ch1_i_u, LV_ALIGN_OUT_BOTTOM_RIGHT, 5, 62);/* 设置标签位置 */


        label_ch1_cc_cv = lv_label_create(power_img); /* 创建文本字体 电压电流*/
        lv_obj_add_style(label_ch1_cc_cv, &style_power_Font3, 0);
        lv_obj_set_style_text_align(label_ch1_cc_cv, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
        lv_label_set_text(label_ch1_cc_cv, "CV");/* 设置标签文本 */
        lv_obj_align(label_ch1_cc_cv, LV_ALIGN_CENTER, -305, 158);/* 设置标签位置 */

        label_ch1_ocp = lv_label_create(power_img); /* 创建文本字体 电压电流*/
        lv_obj_add_style(label_ch1_ocp, &style_power_Font3, 0);
        lv_obj_set_style_text_align(label_ch1_ocp, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
        lv_label_set_text(label_ch1_ocp, "OCP");/* 设置标签文本 */
        lv_obj_align(label_ch1_ocp, LV_ALIGN_CENTER, -232, 158);/* 设置标签位置 */


        label_ch1_ovp = lv_label_create(power_img); /* 创建文本字体 电压电流*/
        lv_obj_add_style(label_ch1_ovp, &style_power_Font3, 0);
        lv_obj_set_style_text_align(label_ch1_ovp, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
        lv_label_set_text(label_ch1_ovp, "OVP");/* 设置标签文本 */
        lv_obj_align(label_ch1_ovp, LV_ALIGN_CENTER, -164, 158);/* 设置标签位置 */



    label_ch2_v = lv_label_create(power_img); /* 创建文本字体 电压电流*/
    lv_obj_add_style(label_ch2_v, &style_power_Font1, 0);
    lv_obj_set_width(label_ch2_v, 190); /* 设置开关宽度 */
    lv_obj_set_height(label_ch2_v, 35); /* 标签长文本自动扩展高度 */
    lv_obj_set_style_text_align(label_ch2_v, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
    lv_label_set_text(label_ch2_v, "30.0000");/* 设置标签文本 */
    lv_obj_align(label_ch2_v, LV_ALIGN_CENTER, 195, -97);/* 设置标签位置 */

    label_ch2_i = lv_label_create(power_img); /* 创建文本字体 电压电流*/
    lv_obj_add_style(label_ch2_i, &style_power_Font1, 0);
    lv_obj_set_width(label_ch2_i, 190); /* 设置开关宽度 */
    lv_obj_set_height(label_ch2_i, 35); /* 标签长文本自动扩展高度 */
    lv_obj_set_style_text_align(label_ch2_i, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
    lv_label_set_text(label_ch2_i, "4.0000");/* 设置标签文本 */
    lv_obj_align_to(label_ch2_i,label_ch2_v, LV_ALIGN_OUT_BOTTOM_RIGHT, 0, 58);/* 设置标签位置 */


    label_ch2_w = lv_label_create(power_img); /* 创建文本字体 电压电流*/
    lv_obj_add_style(label_ch2_w, &style_power_Font1, 0);
    lv_obj_set_width(label_ch2_w, 190); /* 设置开关宽度 */
    lv_obj_set_height(label_ch2_w, 35); /* 标签长文本自动扩展高度 */
    lv_obj_set_style_text_align(label_ch2_w, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
    lv_label_set_text(label_ch2_w, "0.0000");/* 设置标签文本 */
    lv_obj_align_to(label_ch2_w,label_ch2_i, LV_ALIGN_OUT_BOTTOM_RIGHT, 0, 58);/* 设置标签位置 */


        lv_obj_t* label_ch2_v_u = lv_label_create(power_img); /* 创建文本字体 电压电流*/
        lv_obj_add_style(label_ch2_v_u, &style_power_Font2, 0);
        lv_obj_set_style_text_align(label_ch2_v_u, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
        lv_label_set_text(label_ch2_v_u, "V");/* 设置标签文本 */
        lv_obj_align(label_ch2_v_u, LV_ALIGN_CENTER, 310, -90);/* 设置标签位置 */

        lv_obj_t*label_ch2_i_u = lv_label_create(power_img); /* 创建文本字体 电压电流*/
        lv_obj_add_style(label_ch2_i_u, &style_power_Font2, 0);
        lv_obj_set_style_text_align(label_ch2_i_u, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
        lv_label_set_text(label_ch2_i_u, "A");/* 设置标签文本 */
        lv_obj_align_to(label_ch2_i_u,label_ch2_v_u, LV_ALIGN_OUT_BOTTOM_RIGHT, 0, 62);/* 设置标签位置 */

        lv_obj_t* label_ch2_w_u = lv_label_create(power_img); /* 创建文本字体 电压电流*/
        lv_obj_add_style(label_ch2_w_u, &style_power_Font2, 0);
        lv_obj_set_style_text_align(label_ch2_w_u, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
        lv_label_set_text(label_ch2_w_u, "W");/* 设置标签文本 */
        lv_obj_align_to(label_ch2_w_u,label_ch2_i_u, LV_ALIGN_OUT_BOTTOM_RIGHT, 5, 62);/* 设置标签位置 */


        label_ch2_cc_cv = lv_label_create(power_img); /* 创建文本字体 电压电流*/
        lv_obj_add_style(label_ch2_cc_cv, &style_power_Font3, 0);
        lv_obj_set_style_text_align(label_ch2_cc_cv, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
        lv_label_set_text(label_ch2_cc_cv, "CV");/* 设置标签文本 */
        lv_obj_align(label_ch2_cc_cv, LV_ALIGN_CENTER, 104, 158);/* 设置标签位置 */

        label_ch2_ocp = lv_label_create(power_img); /* 创建文本字体 电压电流*/
        lv_obj_add_style(label_ch2_ocp, &style_power_Font3, 0);
        lv_obj_set_style_text_align(label_ch2_ocp, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
        lv_label_set_text(label_ch2_ocp, "OCP");/* 设置标签文本 */
        lv_obj_align(label_ch2_ocp, LV_ALIGN_CENTER, 178, 158);/* 设置标签位置 */


        label_ch2_ovp = lv_label_create(power_img); /* 创建文本字体 电压电流*/
        lv_obj_add_style(label_ch2_ovp, &style_power_Font3, 0);
        lv_obj_set_style_text_align(label_ch2_ovp, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
        lv_label_set_text(label_ch2_ovp, "OVP");/* 设置标签文本 */
        lv_obj_align(label_ch2_ovp, LV_ALIGN_CENTER, 247, 158);/* 设置标签位置 */



    lv_obj_t* label_gpib = lv_label_create(power_img); /* 创建文本字体 电压电流*/
    lv_obj_add_style(label_gpib, &style_power_Font4, 0);
    lv_obj_set_style_text_align(label_gpib, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
    lv_label_set_text(label_gpib, "G");/* 设置标签文本 */
    lv_obj_align(label_gpib, LV_ALIGN_CENTER, 6, -66);/* 设置标签位置 */

    lv_obj_t* label_usart = lv_label_create(power_img); /* 创建文本字体 电压电流*/
    lv_obj_add_style(label_usart, &style_power_Font4, 0);
    lv_obj_set_style_text_align(label_usart, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
    lv_label_set_text(label_usart, "U");/* 设置标签文本 */
    lv_obj_align(label_usart, LV_ALIGN_CENTER, 6, -8);/* 设置标签位置 */


    lv_obj_t* label_lan = lv_label_create(power_img); /* 创建文本字体 电压电流*/
    lv_obj_add_style(label_lan, &style_power_Font4, 0);
    lv_obj_set_style_text_align(label_lan, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
    lv_label_set_text(label_lan, "L");/* 设置标签文本 */
    lv_obj_align(label_lan, LV_ALIGN_CENTER, 6, 45);/* 设置标签位置 */


}






