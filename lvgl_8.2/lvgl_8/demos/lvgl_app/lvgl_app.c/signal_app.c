#include "demos/lvgl_app/lvgl_app.h/screen.h"
#include "lvgl.h"

LV_IMG_DECLARE(signal_set);

LV_IMG_DECLARE(signal_ch);
LV_IMG_DECLARE(signal_ch1);
LV_IMG_DECLARE(signal_ch2);

LV_IMG_DECLARE(signal_wave1);
LV_IMG_DECLARE(signal_wave2);

lv_style_t style_signal_Font1;
lv_style_t style_signal_Font2;
lv_style_t style_signal_Font3;
lv_style_t style_signal_Font4;
lv_style_t style_signal_Font5;
lv_style_t style_signal_Font6;




lv_obj_t * signal_pic_ch1;
lv_obj_t * signal_pic_ch2;

void lvgl_signal_style(void)
{

        //字体
    lv_style_init(&style_signal_Font1);/* 样式初始化 */
    lv_style_set_text_color(&style_signal_Font1, lv_color_white());//设置字体颜色
    lv_style_set_text_font(&style_signal_Font1, &lv_font_montserrat_46); /* 设置风格字体 */

    lv_style_init(&style_signal_Font2);/* 样式初始化 */
    lv_style_set_text_color(&style_signal_Font2, lv_color_white());//设置字体颜色
    lv_style_set_text_font(&style_signal_Font2, &lv_font_montserrat_30); /* 设置风格字体 */

    lv_style_init(&style_signal_Font3);/* 样式初始化 */
    lv_style_set_text_color(&style_signal_Font3, lv_color_white());//设置字体颜色
    lv_style_set_text_font(&style_signal_Font3, &lv_font_montserrat_14); /* 设置风格字体 */

    lv_style_init(&style_signal_Font4);/* 样式初始化 */
    lv_style_set_text_color(&style_signal_Font4, lv_color_white());//设置字体颜色
    lv_style_set_text_font(&style_signal_Font4, &lv_font_montserrat_22); /* 设置风格字体 */



    lv_style_init(&style_signal_Font5);/* 样式初始化 */
    lv_style_set_text_color(&style_signal_Font5, lv_color_make(0x7e, 0xce, 0xf4));//设置字体颜色
    lv_style_set_text_font(&style_signal_Font5, &lv_font_montserrat_26); /* 设置风格字体 */

    lv_style_init(&style_signal_Font6);/* 样式初始化 */
    lv_style_set_text_color(&style_signal_Font6, lv_color_make(0x87, 0x97, 0xcb));//设置字体颜色
    lv_style_set_text_font(&style_signal_Font6, &lv_font_montserrat_26); /* 设置风格字体 */


}

static void event_signal_switch_cb1(lv_event_t* e)
{
        lv_obj_t* switch_obj = lv_event_get_target(e);

    bool reverse = lv_obj_has_state(switch_obj, LV_STATE_CHECKED);
    if(reverse)
    {
        lv_img_set_src(signal_pic_ch1, &signal_ch1 );//设置图片
    }
    else
    {
        lv_img_set_src(signal_pic_ch1, &signal_ch );//设置图片

    }
}

static void event_signal_switch_cb2(lv_event_t* e)
{
    lv_obj_t* switch_obj = lv_event_get_target(e);

    bool reverse = lv_obj_has_state(switch_obj, LV_STATE_CHECKED);
    if(reverse)
    {
        lv_img_set_src(signal_pic_ch2, &signal_ch2 );//设置图片
    }
    else
    {
        lv_img_set_src(signal_pic_ch2, &signal_ch );//设置图片
    }
}
void signal_init(lv_obj_t*obj)
{
    lvgl_signal_style();

    lv_obj_t*signal_img = lv_img_create(obj);//创建图片控件
    lv_img_set_src(signal_img, &signal_set );//设置图片
    lv_obj_align(signal_img, LV_ALIGN_TOP_MID, 0, 0);//位置

    lv_obj_t*signal_pic_wave1 = lv_img_create(signal_img);//创建图片控件
    lv_img_set_src(signal_pic_wave1, &signal_wave1 );//设置图片
    lv_obj_align(signal_pic_wave1, LV_ALIGN_CENTER, -200, 100);//位置

    lv_obj_t*signal_pic_wave2 = lv_img_create(signal_img);//创建图片控件
    lv_img_set_src(signal_pic_wave2, &signal_wave2 );//设置图片
    lv_obj_align(signal_pic_wave2, LV_ALIGN_CENTER, 220, 100);//位置

    signal_pic_ch1 = lv_img_create(signal_img);//创建图片控件
    lv_img_set_src(signal_pic_ch1, &signal_ch );//设置图片
    lv_obj_align(signal_pic_ch1, LV_ALIGN_CENTER, -308, -152);//位置


    signal_pic_ch2 = lv_img_create(signal_img);//创建图片控件
    lv_img_set_src(signal_pic_ch2, &signal_ch );//设置图片
    lv_obj_align(signal_pic_ch2, LV_ALIGN_CENTER, 108, -152);//位置

    lv_obj_t* signal_ch1 = lv_label_create(signal_img); /* 创建文本字体 电压电流*/
    lv_obj_add_style(signal_ch1, &style_signal_Font5, 0);
    lv_obj_set_style_text_align(signal_ch1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
    lv_label_set_text(signal_ch1, "CH1");/* 设置标签文本 */
    lv_obj_align(signal_ch1, LV_ALIGN_CENTER, -310, -153);/* 设置标签位置 */

    lv_obj_t* signal_ch2 = lv_label_create(signal_img); /* 创建文本字体 电压电流*/
    lv_obj_add_style(signal_ch2, &style_signal_Font6, 0);
    lv_obj_set_style_text_align(signal_ch2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
    lv_label_set_text(signal_ch2, "CH2");/* 设置标签文本 */
    lv_obj_align(signal_ch2, LV_ALIGN_CENTER, 106, -153);/* 设置标签位置 */


    lv_obj_t* signal_switch_ch1 = lv_switch_create(signal_img);
    lv_obj_set_width(signal_switch_ch1, 60);    /* 设置开关宽度 */
    lv_obj_set_height(signal_switch_ch1, 20);   /* 设置开关高度 */
    lv_obj_add_event_cb(signal_switch_ch1, event_signal_switch_cb1, LV_EVENT_VALUE_CHANGED, signal_switch_ch1);
    lv_obj_align(signal_switch_ch1, LV_ALIGN_CENTER, -100, -152);  /* 设置开关位置 */

    lv_obj_t* signal_switch_ch2 = lv_switch_create(signal_img);
    lv_obj_set_width(signal_switch_ch2, 60); /* 设置开关宽度 */
    lv_obj_set_height(signal_switch_ch2, 20);/* 设置开关高度 */
    lv_obj_add_event_cb(signal_switch_ch2, event_signal_switch_cb2, LV_EVENT_VALUE_CHANGED, signal_switch_ch2);
    lv_obj_align(signal_switch_ch2, LV_ALIGN_CENTER, 320, -152);/* 设置开关位置 */






    lv_obj_t* signal_freq_ch1 = lv_label_create(signal_img); /* 创建文本字体 电压电流*/
    lv_obj_add_style(signal_freq_ch1, &style_signal_Font4, 0);
    lv_obj_set_style_text_align(signal_freq_ch1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
    lv_label_set_text(signal_freq_ch1, "Freq");/* 设置标签文本 */
    lv_obj_align(signal_freq_ch1, LV_ALIGN_CENTER, -310, -100);/* 设置标签位置 */

        lv_obj_t* signal_freq_ch11 = lv_label_create(signal_img); /* 创建文本字体 电压电流*/
        lv_obj_add_style(signal_freq_ch11, &style_signal_Font2, 0);
        lv_obj_set_style_text_align(signal_freq_ch11, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
        lv_label_set_text(signal_freq_ch11, "50.000000");/* 设置标签文本 */
        lv_obj_align(signal_freq_ch11, LV_ALIGN_CENTER, -185, -100);/* 设置标签位置 */

        lv_obj_t* signal_freq_ch12 = lv_label_create(signal_img); /* 创建文本字体 电压电流*/
        lv_obj_add_style(signal_freq_ch12, &style_signal_Font4, 0);
        lv_obj_set_style_text_align(signal_freq_ch12, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
        lv_label_set_text(signal_freq_ch12, "hz");/* 设置标签文本 */
        lv_obj_align(signal_freq_ch12, LV_ALIGN_CENTER, -90, -100);/* 设置标签位置 */



    lv_obj_t* signal_freq_ch2 = lv_label_create(signal_img); /* 创建文本字体 电压电流*/
    lv_obj_add_style(signal_freq_ch2, &style_signal_Font4, 0);
    lv_obj_set_style_text_align(signal_freq_ch2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
    lv_label_set_text(signal_freq_ch2, "Freq");/* 设置标签文本 */
    lv_obj_align(signal_freq_ch2, LV_ALIGN_CENTER, 106, -100);/* 设置标签位置 */


        lv_obj_t* signal_freq_ch21 = lv_label_create(signal_img); /* 创建文本字体 电压电流*/
        lv_obj_add_style(signal_freq_ch21, &style_signal_Font2, 0);
        lv_obj_set_style_text_align(signal_freq_ch21, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
        lv_label_set_text(signal_freq_ch21, "50.000000");/* 设置标签文本 */
        lv_obj_align(signal_freq_ch21, LV_ALIGN_CENTER, 231, -100);/* 设置标签位置 */

        lv_obj_t* signal_freq_ch22 = lv_label_create(signal_img); /* 创建文本字体 电压电流*/
        lv_obj_add_style(signal_freq_ch22, &style_signal_Font4, 0);
        lv_obj_set_style_text_align(signal_freq_ch22, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
        lv_label_set_text(signal_freq_ch22, "hz");/* 设置标签文本 */
        lv_obj_align(signal_freq_ch22, LV_ALIGN_CENTER, 326, -100);/* 设置标签位置 */


    lv_obj_t* signal_ampl_ch1 = lv_label_create(signal_img); /* 创建文本字体 电压电流*/
    lv_obj_add_style(signal_ampl_ch1, &style_signal_Font4, 0);
    lv_obj_set_style_text_align(signal_ampl_ch1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
    lv_label_set_text(signal_ampl_ch1, "Ampl");/* 设置标签文本 */
    lv_obj_align(signal_ampl_ch1, LV_ALIGN_CENTER, -310, -60);/* 设置标签位置 */

        lv_obj_t* signal_ampl_ch11 = lv_label_create(signal_img); /* 创建文本字体 电压电流*/
        lv_obj_add_style(signal_ampl_ch11, &style_signal_Font2, 0);
        lv_obj_set_style_text_align(signal_ampl_ch11, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
        lv_label_set_text(signal_ampl_ch11, "10.0000");/* 设置标签文本 */
        lv_obj_align(signal_ampl_ch11, LV_ALIGN_CENTER, -204, -60);/* 设置标签位置 */

        lv_obj_t* signal_ampl_ch12 = lv_label_create(signal_img); /* 创建文本字体 电压电流*/
        lv_obj_add_style(signal_ampl_ch12, &style_signal_Font4, 0);
        lv_obj_set_style_text_align(signal_ampl_ch12, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
        lv_label_set_text(signal_ampl_ch12, "Vpp");/* 设置标签文本 */
        lv_obj_align(signal_ampl_ch12, LV_ALIGN_CENTER, -122, -60);/* 设置标签位置 */

    lv_obj_t* signal_ampl_ch2 = lv_label_create(signal_img); /* 创建文本字体 电压电流*/
    lv_obj_add_style(signal_ampl_ch2, &style_signal_Font4, 0);
    lv_obj_set_style_text_align(signal_ampl_ch2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
    lv_label_set_text(signal_ampl_ch2, "Ampl");/* 设置标签文本 */
    lv_obj_align(signal_ampl_ch2, LV_ALIGN_CENTER, 106, -60);/* 设置标签位置 */

        lv_obj_t* signal_ampl_ch21 = lv_label_create(signal_img); /* 创建文本字体 电压电流*/
        lv_obj_add_style(signal_ampl_ch21, &style_signal_Font2, 0);
        lv_obj_set_style_text_align(signal_ampl_ch21, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
        lv_label_set_text(signal_ampl_ch21, "10.0000");/* 设置标签文本 */
        lv_obj_align(signal_ampl_ch21, LV_ALIGN_CENTER, 212, -60);/* 设置标签位置 */

        lv_obj_t* signal_ampl_ch22 = lv_label_create(signal_img); /* 创建文本字体 电压电流*/
        lv_obj_add_style(signal_ampl_ch22, &style_signal_Font4, 0);
        lv_obj_set_style_text_align(signal_ampl_ch22, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
        lv_label_set_text(signal_ampl_ch22, "Vpp");/* 设置标签文本 */
        lv_obj_align(signal_ampl_ch22, LV_ALIGN_CENTER, 294, -60);/* 设置标签位置 */

    lv_obj_t* signal_offset_ch1 = lv_label_create(signal_img); /* 创建文本字体 电压电流*/
    lv_obj_add_style(signal_offset_ch1, &style_signal_Font4, 0);
    lv_obj_set_style_text_align(signal_offset_ch1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
    lv_label_set_text(signal_offset_ch1, "offset");/* 设置标签文本 */
    lv_obj_align(signal_offset_ch1, LV_ALIGN_CENTER, -310, -20);/* 设置标签位置 */

        lv_obj_t* signal_offset_ch11 = lv_label_create(signal_img); /* 创建文本字体 电压电流*/
        lv_obj_add_style(signal_offset_ch11, &style_signal_Font2, 0);
        lv_obj_set_style_text_align(signal_offset_ch11, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
        lv_label_set_text(signal_offset_ch11, "0.0000");/* 设置标签文本 */
        lv_obj_align(signal_offset_ch11, LV_ALIGN_CENTER, -210, -20);/* 设置标签位置 */

        lv_obj_t* signal_offset_ch12 = lv_label_create(signal_img); /* 创建文本字体 电压电流*/
        lv_obj_add_style(signal_offset_ch12, &style_signal_Font4, 0);
        lv_obj_set_style_text_align(signal_offset_ch12, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
        lv_label_set_text(signal_offset_ch12, "Vdc");/* 设置标签文本 */
        lv_obj_align(signal_offset_ch12, LV_ALIGN_CENTER, -135, -20);/* 设置标签位置 */

    lv_obj_t* signal_offset_ch2 = lv_label_create(signal_img); /* 创建文本字体 电压电流*/
    lv_obj_add_style(signal_offset_ch2, &style_signal_Font4, 0);
    lv_obj_set_style_text_align(signal_offset_ch2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
    lv_label_set_text(signal_offset_ch2, "offset");/* 设置标签文本 */
    lv_obj_align(signal_offset_ch2, LV_ALIGN_CENTER, 106, -20);/* 设置标签位置 */

        lv_obj_t* signal_offset_ch21 = lv_label_create(signal_img); /* 创建文本字体 电压电流*/
        lv_obj_add_style(signal_offset_ch21, &style_signal_Font2, 0);
        lv_obj_set_style_text_align(signal_offset_ch21, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
        lv_label_set_text(signal_offset_ch21, "0.0000");/* 设置标签文本 */
        lv_obj_align(signal_offset_ch21, LV_ALIGN_CENTER, 206, -20);/* 设置标签位置 */

        lv_obj_t* signal_offset_ch22 = lv_label_create(signal_img); /* 创建文本字体 电压电流*/
        lv_obj_add_style(signal_offset_ch22, &style_signal_Font4, 0);
        lv_obj_set_style_text_align(signal_offset_ch22, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
        lv_label_set_text(signal_offset_ch22, "Vdc");/* 设置标签文本 */
        lv_obj_align(signal_offset_ch22, LV_ALIGN_CENTER, 282, -20);/* 设置标签位置 */

    {

        lv_obj_t* signal_label_gpib = lv_label_create(signal_img); /* 创建文本字体 电压电流*/
        lv_obj_add_style(signal_label_gpib, &style_signal_Font4, 0);
        lv_obj_set_style_text_align(signal_label_gpib, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
        lv_label_set_text(signal_label_gpib, "G");/* 设置标签文本 */
        lv_obj_align(signal_label_gpib, LV_ALIGN_CENTER, 3, -116);/* 设置标签位置 */

        lv_obj_t* signal_label_usart = lv_label_create(signal_img); /* 创建文本字体 电压电流*/
        lv_obj_add_style(signal_label_usart, &style_signal_Font4, 0);
        lv_obj_set_style_text_align(signal_label_usart, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
        lv_label_set_text(signal_label_usart, "U");/* 设置标签文本 */
        lv_obj_align(signal_label_usart, LV_ALIGN_CENTER, 3, -58);/* 设置标签位置 */


        lv_obj_t* signal_label_lan = lv_label_create(signal_img); /* 创建文本字体 电压电流*/
        lv_obj_add_style(signal_label_lan, &style_signal_Font4, 0);
        lv_obj_set_style_text_align(signal_label_lan, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
        lv_label_set_text(signal_label_lan, "L");/* 设置标签文本 */
        lv_obj_align(signal_label_lan, LV_ALIGN_CENTER, 3, -5);/* 设置标签位置 */

    }

}






