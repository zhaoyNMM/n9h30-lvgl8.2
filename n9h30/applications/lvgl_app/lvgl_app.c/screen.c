#include "screen.h"
#include "power_app.h"
#include "signal_app.h"
#include "menu_app.h"
#include "oscilloscope_app.h"
#include "lvgl.h"

//图片声明

LV_IMG_DECLARE(title_power);
LV_IMG_DECLARE(title_oscilloscope);
LV_IMG_DECLARE(title_signa);
LV_IMG_DECLARE(title_menu);


LV_IMG_DECLARE(power);
LV_IMG_DECLARE(power1);

LV_IMG_DECLARE(oscilloscope);
LV_IMG_DECLARE(oscilloscope1);

LV_IMG_DECLARE(signal_tt);
LV_IMG_DECLARE(signal1);

LV_IMG_DECLARE(menu);
LV_IMG_DECLARE(menu1);

//字体声明

LV_FONT_DECLARE(myFont);


//style样式
 lv_style_t style_context;


 lv_obj_t * title_img;
//界面
 lv_obj_t*obj_power;
 lv_obj_t*obj_oscilloscope;
 lv_obj_t*obj_signal;
 lv_obj_t*obj_menu;



/*
*********************************************************************************************************
*	函 数 名: lvgl_screen_style
*	功能说明: lvgl主界面样式
*	形    参: 无
*	返 回 值: ret  0成功  <0 失败
*********************************************************************************************************
*/

void lvgl_screen_style(void)
{


    //主菜单界面样式
    lv_style_init(&style_context); /* 主菜单界面样式初始化 */
    lv_style_set_radius(&style_context, 0);//弧角设置为0
    lv_style_set_border_width(&style_context, 0); /* 设置边框的宽度 */
    lv_style_set_pad_all(&style_context, 0);//设置与z子类之间的间隙(内边距padding)
    lv_style_set_bg_color(&style_context, lv_color_hex(0x000000)); /* 设置背景黑色*/
    lv_style_set_bg_opa(&style_context, LV_OPA_100); /* 设置背景透明度 */


}



static void power_btn_cb(lv_event_t* e)
{
    lv_img_set_src(title_img, &title_power);//设置图片
    lv_obj_add_flag (obj_oscilloscope, LV_OBJ_FLAG_HIDDEN);//隐藏
    lv_obj_add_flag (obj_signal, LV_OBJ_FLAG_HIDDEN);//隐藏
    lv_obj_add_flag (obj_menu, LV_OBJ_FLAG_HIDDEN);//隐藏
    lv_obj_clear_flag (obj_power, LV_OBJ_FLAG_HIDDEN);//清除界面隐藏与上一条实现界面切换
}

static void oscilloscope_btn_cb(lv_event_t* e)
{
    lv_img_set_src(title_img, &title_oscilloscope);//设置图片
    lv_obj_add_flag (obj_power, LV_OBJ_FLAG_HIDDEN);//隐藏
    lv_obj_add_flag (obj_signal, LV_OBJ_FLAG_HIDDEN);//隐藏
    lv_obj_add_flag (obj_menu, LV_OBJ_FLAG_HIDDEN);//隐藏
    lv_obj_clear_flag (obj_oscilloscope, LV_OBJ_FLAG_HIDDEN);//清除界面隐藏与上一条实现界面切换
}


static void signal_cb(lv_event_t* e)
{
   lv_img_set_src(title_img, &title_signa);//设置图片
    lv_obj_add_flag (obj_power, LV_OBJ_FLAG_HIDDEN);//隐藏
    lv_obj_add_flag (obj_oscilloscope, LV_OBJ_FLAG_HIDDEN);//隐藏
    lv_obj_add_flag (obj_menu, LV_OBJ_FLAG_HIDDEN);//隐藏
    lv_obj_clear_flag (obj_signal, LV_OBJ_FLAG_HIDDEN);//清除界面隐藏与上一条实现界面切换
}


static void menu_btn_cb(lv_event_t* e)
{
    lv_img_set_src(title_img, &title_menu);//设置图片
    lv_obj_add_flag (obj_power, LV_OBJ_FLAG_HIDDEN);//隐藏
    lv_obj_add_flag (obj_oscilloscope, LV_OBJ_FLAG_HIDDEN);//隐藏
    lv_obj_add_flag (obj_signal, LV_OBJ_FLAG_HIDDEN);//隐藏
    lv_obj_clear_flag (obj_menu, LV_OBJ_FLAG_HIDDEN);//清除界面隐藏与上一条实现界面切换
}

/*
*********************************************************************************************************
*	函 数 名: lvgl_bottom_top
*	功能说明: 界面顶部与底部的控件
*	形    参: lv_obj_t*obj
*	返 回 值: ret  0成功  <0 失败
*********************************************************************************************************
*/
void lvgl_bottom_top(lv_obj_t*obj)
{

    //顶部图片
     title_img = lv_img_create(obj);//创建图片控件
     lv_img_set_src(title_img, &title_power);//设置图片
     lv_obj_align(title_img, LV_ALIGN_TOP_MID, 0, 0);//位置


     //底部图片
     lv_obj_t * bottom_imgbtn1 = lv_imgbtn_create(obj);//创建图片按钮控件
     lv_obj_set_size(bottom_imgbtn1, 200, 44);//设置界面大小
     lv_imgbtn_set_src(bottom_imgbtn1, LV_IMGBTN_STATE_RELEASED, NULL, &power1, NULL);//设置没有按下界面图像
     lv_imgbtn_set_src(bottom_imgbtn1, LV_IMGBTN_STATE_PRESSED, NULL, &power, NULL);//设置按下界面图像
     lv_obj_add_event_cb(bottom_imgbtn1, power_btn_cb, LV_EVENT_RELEASED, NULL);// 添加一个事件
     lv_obj_align(bottom_imgbtn1, LV_ALIGN_BOTTOM_LEFT, 0, 0);//位置

     lv_obj_t * bottom_imgbtn2 = lv_imgbtn_create(obj);//创建图片按钮控件
     lv_obj_set_size(bottom_imgbtn2, 200, 44);//设置界面大小
     lv_imgbtn_set_src(bottom_imgbtn2, LV_IMGBTN_STATE_RELEASED, NULL, &oscilloscope1, NULL);//设置没有按下界面图像
     lv_imgbtn_set_src(bottom_imgbtn2, LV_IMGBTN_STATE_PRESSED, NULL, &oscilloscope, NULL);//设置按下界面图像
     lv_obj_add_event_cb(bottom_imgbtn2, oscilloscope_btn_cb, LV_EVENT_RELEASED, NULL);// 添加一个事件
     lv_obj_align(bottom_imgbtn2, LV_ALIGN_BOTTOM_MID, -100, 0);//位置

     lv_obj_t * bottom_imgbtn3 = lv_imgbtn_create(obj);//创建图片按钮控件
     lv_obj_set_size(bottom_imgbtn3, 200, 44);//设置界面大小
     lv_imgbtn_set_src(bottom_imgbtn3, LV_IMGBTN_STATE_RELEASED, NULL, &signal1, NULL);//设置没有按下界面图像
     lv_imgbtn_set_src(bottom_imgbtn3, LV_IMGBTN_STATE_PRESSED, NULL, &signal_tt, NULL);//设置按下界面图像
     lv_obj_add_event_cb(bottom_imgbtn3, signal_cb, LV_EVENT_RELEASED, NULL);//添加一个事件
     lv_obj_align(bottom_imgbtn3, LV_ALIGN_BOTTOM_MID, 100, 0);//位置

     lv_obj_t * bottom_imgbtn4 = lv_imgbtn_create(obj);//创建图片按钮控件
     lv_obj_set_size(bottom_imgbtn4, 200, 44);//设置界面大小
     lv_imgbtn_set_src(bottom_imgbtn4, LV_IMGBTN_STATE_RELEASED, NULL, &menu1, NULL);//设置没有按下界面图像
     lv_imgbtn_set_src(bottom_imgbtn4, LV_IMGBTN_STATE_PRESSED, NULL, &menu, NULL);//设置按下界面图像
     lv_obj_add_event_cb(bottom_imgbtn4, menu_btn_cb, LV_EVENT_RELEASED, NULL);// 添加一个事件
     lv_obj_align(bottom_imgbtn4, LV_ALIGN_BOTTOM_RIGHT, 0, 0);//位置

}


/*
*********************************************************************************************************
*	函 数 名: lvgl_inlet
*	功能说明: lvgl入口函数
*	形    参: 无
*	返 回 值: ret  0成功  <0 失败
*********************************************************************************************************
*/
void lvgl_inlet(void)
{
    lvgl_screen_style();

    lv_obj_t * obj_setting = lv_obj_create(lv_scr_act());//主界面
    lv_obj_set_size(obj_setting, LV_HOR_RES, LV_VER_RES);//设置界面大小
    lv_obj_add_style(obj_setting, & style_context, LV_STATE_DEFAULT);//添加风格
    lv_obj_align(obj_setting, LV_ALIGN_CENTER, 0, 0);//位置



    obj_power = lv_obj_create(obj_setting);//电源界面
    lv_obj_set_size(obj_power, 800, 395);//设置界面大小
    lv_obj_add_style(obj_power, & style_context, LV_STATE_DEFAULT);//添加风格
    lv_obj_align(obj_power, LV_ALIGN_CENTER, 0, -3);//位置

    obj_oscilloscope = lv_obj_create(obj_setting);//示波器界面
    lv_obj_set_size(obj_oscilloscope, 800, 395);//设置界面大小
    lv_obj_add_style(obj_oscilloscope, & style_context, LV_STATE_DEFAULT);//添加风格
    lv_obj_add_flag(obj_oscilloscope, LV_OBJ_FLAG_HIDDEN);//隐藏
    lv_obj_align(obj_oscilloscope, LV_ALIGN_CENTER, 0, -3);//位置

    obj_signal = lv_obj_create(obj_setting);//信号源界面
    lv_obj_set_size(obj_signal, 800, 395);//设置界面大小
    lv_obj_add_style(obj_signal, & style_context, LV_STATE_DEFAULT);//添加风格
    lv_obj_add_flag(obj_signal, LV_OBJ_FLAG_HIDDEN);//隐藏
    lv_obj_align(obj_signal, LV_ALIGN_CENTER, 0, -3);//位置

    obj_menu = lv_obj_create(obj_setting);//菜单界面
    lv_obj_set_size(obj_menu, 800, 395);//设置界面大小
    lv_obj_add_style(obj_menu, & style_context, LV_STATE_DEFAULT);//添加风格
    lv_obj_add_flag(obj_menu, LV_OBJ_FLAG_HIDDEN);//隐藏
    lv_obj_align(obj_menu, LV_ALIGN_CENTER, 0, -3);//位置



    lvgl_bottom_top(obj_setting);//调用创建好的顶部与底部的控件

    power_init(obj_power);
    oscilloscope_init(obj_oscilloscope);
    signal_init(obj_signal);
    menu_init(obj_menu);

}









