#include "demos/lvgl_app/lvgl_app.h/screen.h"
#include "demos/lvgl_app/lvgl_app.h/menu_app.h"
#include "lvgl.h"

lv_style_t style_menu_Font1;
lv_style_t style_menu_Font2;
lv_style_t style_menu_Font3;



lv_style_t menu_style;
lv_style_t menu_style1;
lv_style_t menu_style2;

lv_obj_t*menu_title_uart;
lv_obj_t*menu_title_lan;
lv_obj_t*menu_title_GPIB;

void lvgl_menu_style(void)
{

        //字体
    lv_style_init(&style_menu_Font1);/* 样式初始化 */
    lv_style_set_text_color(&style_menu_Font1, lv_color_make(0xff, 0x00, 0x00));//设置字体颜色
    lv_style_set_text_font(&style_menu_Font1, &lv_font_montserrat_30); /* 设置风格字体 */

    lv_style_init(&style_menu_Font2);/* 样式初始化 */
    lv_style_set_text_color(&style_menu_Font2, lv_color_black());//设置字体颜色
    lv_style_set_text_font(&style_menu_Font2, &lv_font_montserrat_30); /* 设置风格字体 */

    lv_style_init(&style_menu_Font3);/* 样式初始化 */
    lv_style_set_text_color(&style_menu_Font3, lv_color_black());//设置字体颜色
    lv_style_set_text_font(&style_menu_Font3, &lv_font_montserrat_20); /* 设置风格字体 */






    lv_style_init(&menu_style);
    lv_style_set_border_width(&menu_style, 5); /* 设置边框的宽度 */
    lv_style_set_border_color(&menu_style, lv_color_hex(0x707AFA));//边框颜色
    lv_style_set_pad_all(&menu_style, 0);//设置与z子类之间的间隙(内边距padding)
    lv_style_set_bg_color(&menu_style, lv_color_hex(0xB0B0B0)); /* 设置背景色*/
    lv_style_set_bg_opa(&menu_style, LV_OPA_100); /* 设置背景透明度 */


    lv_style_init(&menu_style1);
    lv_style_set_border_width(&menu_style1, 4); /* 设置边框的宽度 */
    lv_style_set_border_color(&menu_style1, lv_color_hex(0x707AFA));//边框颜色
    lv_style_set_pad_all(&menu_style1, 0);//设置与z子类之间的间隙(内边距padding)
    lv_style_set_bg_color(&menu_style1, lv_color_hex(0xC7FAE5)); /* 设置背景色*/
    lv_style_set_bg_opa(&menu_style1, LV_OPA_100); /* 设置背景透明度 */

    lv_style_init(&menu_style2);
    lv_style_set_border_width(&menu_style2, 4); /* 设置边框的宽度 */
    lv_style_set_border_color(&menu_style2, lv_color_hex(0x8987D7));//边框颜色
    lv_style_set_pad_all(&menu_style2, 0);//设置与z子类之间的间隙(内边距padding)
    lv_style_set_bg_color(&menu_style2, lv_color_hex(0x6B70D7)); /* 设置背景色*/
    lv_style_set_bg_opa(&menu_style2, LV_OPA_100); /* 设置背景透明度 */
}



static void btn1_btn_cb(lv_event_t* e)
{

         lv_obj_add_flag (menu_title_lan, LV_OBJ_FLAG_HIDDEN);//隐藏
         lv_obj_add_flag (menu_title_GPIB, LV_OBJ_FLAG_HIDDEN);//隐藏
         lv_obj_clear_flag (menu_title_uart, LV_OBJ_FLAG_HIDDEN);//清除界面隐藏与上一条实现界面切换




}

static void btn2_btn_cb(lv_event_t* e)
{
         lv_obj_add_flag (menu_title_uart, LV_OBJ_FLAG_HIDDEN);//隐藏
         lv_obj_add_flag (menu_title_GPIB, LV_OBJ_FLAG_HIDDEN);//隐藏
         lv_obj_clear_flag (menu_title_lan, LV_OBJ_FLAG_HIDDEN);//清除界面隐藏与上一条实现界面切换

}


static void btn3_btn_cb(lv_event_t* e)
{
        lv_obj_add_flag (menu_title_uart, LV_OBJ_FLAG_HIDDEN);//隐藏
        lv_obj_add_flag (menu_title_lan, LV_OBJ_FLAG_HIDDEN);//隐藏
        lv_obj_clear_flag (menu_title_GPIB, LV_OBJ_FLAG_HIDDEN);//清除界面隐藏与上一条实现界面切换

}

void  menu_init(lv_obj_t*obj)
{
    lvgl_menu_style();


    lv_obj_t*menu_title = lv_obj_create(obj);//菜单界面
    lv_obj_set_size(menu_title, 110, 60);//设置界面大小
    lv_obj_add_style(menu_title, & menu_style, LV_STATE_DEFAULT);//添加风格
    lv_obj_align(menu_title, LV_ALIGN_CENTER, 0, -155);//位置

        lv_obj_t*menu_label_title = lv_label_create(menu_title); /* 创建文本字体 电压电流*/
        lv_obj_add_style(menu_label_title, &style_menu_Font1, 0);
        lv_obj_set_style_text_align(menu_label_title, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
        lv_label_set_text(menu_label_title, "MENU");/* 设置标签文本 */
        lv_obj_align(menu_label_title, LV_ALIGN_CENTER, 0, 0);/* 设置标签位置 */

    lv_obj_t*menu_title1 = lv_obj_create(obj);
    lv_obj_set_size(menu_title1, 180, 300);//设置界面大小
    lv_obj_add_style(menu_title1, & menu_style1, LV_STATE_DEFAULT);//添加风格
    lv_obj_align(menu_title1, LV_ALIGN_CENTER, -302, 40);//位置
{


    lv_obj_t * btn1 = lv_btn_create(menu_title1);
    lv_obj_set_size(btn1, 150, 70);//设置界面大小
    lv_obj_add_style(btn1, & menu_style2, LV_STATE_DEFAULT);
    lv_obj_add_event_cb(btn1, btn1_btn_cb, LV_EVENT_RELEASED, NULL);
    lv_obj_align(btn1, LV_ALIGN_CENTER, 0, -90);

        lv_obj_t*btn1_label = lv_label_create(btn1); /* 创建文本字体 电压电流*/
        lv_obj_add_style(btn1_label, &style_menu_Font2, 0);
        lv_obj_set_style_text_align(btn1_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
        lv_label_set_text(btn1_label, "UART");/* 设置标签文本 */
        lv_obj_align(btn1_label, LV_ALIGN_CENTER, 0, 0);/* 设置标签位置 */


    lv_obj_t * btn2 = lv_btn_create(menu_title1);
    lv_obj_set_size(btn2, 150, 70);//设置界面大小
    lv_obj_add_style(btn2, & menu_style2, LV_STATE_DEFAULT);
    lv_obj_add_event_cb(btn2, btn2_btn_cb,LV_EVENT_RELEASED, NULL);
    lv_obj_align(btn2, LV_ALIGN_CENTER, 0, 0);

        lv_obj_t*btn2_label = lv_label_create(btn2); /* 创建文本字体 电压电流*/
        lv_obj_add_style(btn2_label, &style_menu_Font2, 0);
        lv_obj_set_style_text_align(btn2_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
        lv_label_set_text(btn2_label, "LAN");/* 设置标签文本 */
        lv_obj_align(btn2_label, LV_ALIGN_CENTER, 0, 0);/* 设置标签位置 */

    lv_obj_t * btn3 = lv_btn_create(menu_title1);
    lv_obj_set_size(btn3, 150, 70);//设置界面大小
    lv_obj_add_style(btn3, & menu_style2, LV_STATE_DEFAULT);
    lv_obj_add_event_cb(btn3, btn3_btn_cb,LV_EVENT_RELEASED, NULL);
    lv_obj_align(btn3, LV_ALIGN_CENTER, 0, 90);

        lv_obj_t*btn3_label = lv_label_create(btn3); /* 创建文本字体 电压电流*/
        lv_obj_add_style(btn3_label, &style_menu_Font2, 0);
        lv_obj_set_style_text_align(btn3_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
        lv_label_set_text(btn3_label, "GPIO");/* 设置标签文本 */
        lv_obj_align(btn3_label, LV_ALIGN_CENTER, 0, 0);/* 设置标签位置 */


        }
    menu_title_uart = lv_obj_create(obj);
    lv_obj_set_size(menu_title_uart, 600, 300);//设置界面大小
    lv_obj_add_style(menu_title_uart, & menu_style1, LV_STATE_DEFAULT);//添加风格
    lv_obj_align(menu_title_uart, LV_ALIGN_CENTER, 95, 40);//位置

    menu_title_lan = lv_obj_create(obj);
    lv_obj_set_size(menu_title_lan, 600, 300);//设置界面大小
    lv_obj_add_style(menu_title_lan, & menu_style1, LV_STATE_DEFAULT);//添加风格
    lv_obj_add_flag(menu_title_lan, LV_OBJ_FLAG_HIDDEN);//隐藏
    lv_obj_align(menu_title_lan, LV_ALIGN_CENTER, 95, 40);//位置

    menu_title_GPIB = lv_obj_create(obj);
    lv_obj_set_size(menu_title_GPIB, 600, 300);//设置界面大小
    lv_obj_add_style(menu_title_GPIB, & menu_style1, LV_STATE_DEFAULT);//添加风格
    lv_obj_add_flag(menu_title_GPIB, LV_OBJ_FLAG_HIDDEN);//隐藏
    lv_obj_align(menu_title_GPIB, LV_ALIGN_CENTER, 95, 40);//位置


    uart_init(menu_title_uart);
    lan_init(menu_title_lan);
    gpib_init(menu_title_GPIB);
}


void uart_init(lv_obj_t*obj)
{
    lv_obj_t*menu_uart = lv_obj_create(obj);
    lv_obj_set_size(menu_uart, 400, 200);//设置界面大小
    lv_obj_add_style(menu_uart, & menu_style1, LV_STATE_DEFAULT);//添加风格
    lv_obj_align(menu_uart, LV_ALIGN_CENTER, 0, 0);//位置

    lv_obj_t*menu_uart1 = lv_obj_create(obj);
    lv_obj_set_size(menu_uart1, 100, 50);//设置界面大小
    lv_obj_add_style(menu_uart1, & menu_style2, LV_STATE_DEFAULT);//添加风格
    lv_obj_align(menu_uart1, LV_ALIGN_CENTER, 0, -60);//位置

        lv_obj_t*btn1_label = lv_label_create(menu_uart1); /* 创建文本字体 电压电流*/
        lv_obj_add_style(btn1_label, &style_menu_Font1, 0);
        lv_obj_set_style_text_align(btn1_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
        lv_label_set_text(btn1_label, "UART");/* 设置标签文本 */
        lv_obj_align(btn1_label, LV_ALIGN_CENTER, 0, 0);/* 设置标签位置 */

    lv_obj_t*menu_uart2 = lv_obj_create(obj);
    lv_obj_set_size(menu_uart2, 350, 120);//设置界面大小
    lv_obj_add_style(menu_uart2, & menu_style1, LV_STATE_DEFAULT);//添加风格
    lv_obj_align(menu_uart2, LV_ALIGN_CENTER, 0, 30);//位置

        lv_obj_t*menu_uart3 = lv_obj_create(menu_uart2);
        lv_obj_set_size(menu_uart3, 110, 50);//设置界面大小
        lv_obj_add_style(menu_uart3, & menu_style2, LV_STATE_DEFAULT);//添加风格
        lv_obj_align(menu_uart3, LV_ALIGN_CENTER, -105, 0);//位置

                lv_obj_t*btn2_label = lv_label_create(menu_uart3); /* 创建文本字体 电压电流*/
                lv_obj_add_style(btn2_label, &style_menu_Font2, 0);
                lv_obj_set_style_text_align(btn2_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
                lv_label_set_text(btn2_label, "baud");/* 设置标签文本 */
                lv_obj_align(btn2_label, LV_ALIGN_CENTER, 0, 0);/* 设置标签位置 */

        lv_obj_t*menu_uart4 = lv_obj_create(menu_uart2);
        lv_obj_set_size(menu_uart4, 200, 50);//设置界面大小
        lv_obj_add_style(menu_uart4, & menu_style1, LV_STATE_DEFAULT);//添加风格
        lv_obj_align(menu_uart4, LV_ALIGN_CENTER, 60, 0);//位置

            lv_obj_t*btn3_label = lv_label_create(menu_uart4); /* 创建文本字体 电压电流*/
            lv_obj_add_style(btn3_label, &style_menu_Font2, 0);
            lv_obj_set_style_text_align(btn3_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
            lv_label_set_text(btn3_label, "115200");/* 设置标签文本 */
            lv_obj_align(btn3_label, LV_ALIGN_CENTER, 0, 0);/* 设置标签位置 */

}
void lan_init(lv_obj_t*obj)
{
    lv_obj_t*menu_lan = lv_obj_create(obj);
    lv_obj_set_size(menu_lan, 500, 200);//设置界面大小
    lv_obj_add_style(menu_lan, & menu_style1, LV_STATE_DEFAULT);//添加风格
    lv_obj_align(menu_lan, LV_ALIGN_CENTER, 0, 30);//位置

    lv_obj_t*menu_lan1 = lv_obj_create(obj);
    lv_obj_set_size(menu_lan1, 100, 50);//设置界面大小
    lv_obj_add_style(menu_lan1, & menu_style2, LV_STATE_DEFAULT);//添加风格
    lv_obj_align(menu_lan1, LV_ALIGN_CENTER, 0, -105);//位置

        lv_obj_t*btn1_label = lv_label_create(menu_lan1); /* 创建文本字体 电压电流*/
        lv_obj_add_style(btn1_label, &style_menu_Font1, 0);
        lv_obj_set_style_text_align(btn1_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
        lv_label_set_text(btn1_label, "LAN");/* 设置标签文本 */
        lv_obj_align(btn1_label, LV_ALIGN_CENTER, 0, 0);/* 设置标签位置 */


   {
        lv_obj_t*menu_lan_ip = lv_obj_create(menu_lan);
        lv_obj_set_size(menu_lan_ip, 100, 45);//设置界面大小
        lv_obj_add_style(menu_lan_ip, & menu_style2, LV_STATE_DEFAULT);//添加风格
        lv_obj_align(menu_lan_ip, LV_ALIGN_CENTER, -188, -60);//位置

            lv_obj_t*lan_ip_label = lv_label_create(menu_lan_ip); /* 创建文本字体 电压电流*/
            lv_obj_add_style(lan_ip_label, &style_menu_Font3, 0);
            lv_obj_set_style_text_align(lan_ip_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
            lv_label_set_text(lan_ip_label, "ip");/* 设置标签文本 */
            lv_obj_align(lan_ip_label, LV_ALIGN_CENTER, 0, 0);/* 设置标签位置 */

        lv_obj_t*menu_lan_ip1 = lv_obj_create(menu_lan);
        lv_obj_set_size(menu_lan_ip1, 85, 45);//设置界面大小
        lv_obj_add_style(menu_lan_ip1, & menu_style1, LV_STATE_DEFAULT);//添加风格
        lv_obj_align(menu_lan_ip1, LV_ALIGN_CENTER, -90, -60);//位置

            lv_obj_t*lan_ip1_label = lv_label_create(menu_lan_ip1); /* 创建文本字体 电压电流*/
            lv_obj_add_style(lan_ip1_label, &style_menu_Font3, 0);
            lv_obj_set_style_text_align(lan_ip1_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
            lv_label_set_text(lan_ip1_label, "192");/* 设置标签文本 */
            lv_obj_align(lan_ip1_label, LV_ALIGN_CENTER, 0, 0);/* 设置标签位置 */

        lv_obj_t*menu_lan_ip2 = lv_obj_create(menu_lan);
        lv_obj_set_size(menu_lan_ip2, 85, 45);//设置界面大小
        lv_obj_add_style(menu_lan_ip2, & menu_style1, LV_STATE_DEFAULT);//添加风格
        lv_obj_align(menu_lan_ip2, LV_ALIGN_CENTER, 5, -60);//位置

            lv_obj_t*lan_ip2_label = lv_label_create(menu_lan_ip2); /* 创建文本字体 电压电流*/
            lv_obj_add_style(lan_ip2_label, &style_menu_Font3, 0);
            lv_obj_set_style_text_align(lan_ip2_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
            lv_label_set_text(lan_ip2_label, "168");/* 设置标签文本 */
            lv_obj_align(lan_ip2_label, LV_ALIGN_CENTER, 0, 0);/* 设置标签位置 */

        lv_obj_t*menu_lan_ip3 = lv_obj_create(menu_lan);
        lv_obj_set_size(menu_lan_ip3, 85, 45);//设置界面大小
        lv_obj_add_style(menu_lan_ip3, & menu_style1, LV_STATE_DEFAULT);//添加风格
        lv_obj_align(menu_lan_ip3, LV_ALIGN_CENTER, 100, -60);//位置

            lv_obj_t*lan_ip3_label = lv_label_create(menu_lan_ip3); /* 创建文本字体 电压电流*/
            lv_obj_add_style(lan_ip3_label, &style_menu_Font3, 0);
            lv_obj_set_style_text_align(lan_ip3_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
            lv_label_set_text(lan_ip3_label, "002");/* 设置标签文本 */
            lv_obj_align(lan_ip3_label, LV_ALIGN_CENTER, 0, 0);/* 设置标签位置 */

        lv_obj_t*menu_lan_ip4 = lv_obj_create(menu_lan);
        lv_obj_set_size(menu_lan_ip4, 85, 45);//设置界面大小
        lv_obj_add_style(menu_lan_ip4, & menu_style1, LV_STATE_DEFAULT);//添加风格
        lv_obj_align(menu_lan_ip4, LV_ALIGN_CENTER, 195, -60);//位置

            lv_obj_t*lan_ip4_label = lv_label_create(menu_lan_ip4); /* 创建文本字体 电压电流*/
            lv_obj_add_style(lan_ip4_label, &style_menu_Font3, 0);
            lv_obj_set_style_text_align(lan_ip4_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
            lv_label_set_text(lan_ip4_label, "001");/* 设置标签文本 */
            lv_obj_align(lan_ip4_label, LV_ALIGN_CENTER, 0, 0);/* 设置标签位置 */

    }

    {
        lv_obj_t*menu_lan_gateway = lv_obj_create(menu_lan);
        lv_obj_set_size(menu_lan_gateway, 100, 45);//设置界面大小
        lv_obj_add_style(menu_lan_gateway, & menu_style2, LV_STATE_DEFAULT);//添加风格
        lv_obj_align(menu_lan_gateway, LV_ALIGN_CENTER, -188, 0);//位置

            lv_obj_t*lan_gateway_label = lv_label_create(menu_lan_gateway); /* 创建文本字体 电压电流*/
            lv_obj_add_style(lan_gateway_label, &style_menu_Font3, 0);
            lv_obj_set_style_text_align(lan_gateway_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
            lv_label_set_text(lan_gateway_label, "gateway");/* 设置标签文本 */
            lv_obj_align(lan_gateway_label, LV_ALIGN_CENTER, 0, 0);/* 设置标签位置 */

        lv_obj_t*menu_lan_gateway1 = lv_obj_create(menu_lan);
        lv_obj_set_size(menu_lan_gateway1, 85, 45);//设置界面大小
        lv_obj_add_style(menu_lan_gateway1, & menu_style1, LV_STATE_DEFAULT);//添加风格
        lv_obj_align(menu_lan_gateway1, LV_ALIGN_CENTER, -90, 0);//位置

            lv_obj_t*lan_gateway1_label = lv_label_create(menu_lan_gateway1); /* 创建文本字体 电压电流*/
            lv_obj_add_style(lan_gateway1_label, &style_menu_Font3, 0);
            lv_obj_set_style_text_align(lan_gateway1_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
            lv_label_set_text(lan_gateway1_label, "192");/* 设置标签文本 */
            lv_obj_align(lan_gateway1_label, LV_ALIGN_CENTER, 0, 0);/* 设置标签位置 */

        lv_obj_t*menu_lan_gateway2 = lv_obj_create(menu_lan);
        lv_obj_set_size(menu_lan_gateway2, 85, 45);//设置界面大小
        lv_obj_add_style(menu_lan_gateway2, & menu_style1, LV_STATE_DEFAULT);//添加风格
        lv_obj_align(menu_lan_gateway2, LV_ALIGN_CENTER, 5, 0);//位置

            lv_obj_t*lan_gateway2_label = lv_label_create(menu_lan_gateway2); /* 创建文本字体 电压电流*/
            lv_obj_add_style(lan_gateway2_label, &style_menu_Font3, 0);
            lv_obj_set_style_text_align(lan_gateway2_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
            lv_label_set_text(lan_gateway2_label, "168");/* 设置标签文本 */
            lv_obj_align(lan_gateway2_label, LV_ALIGN_CENTER, 0, 0);/* 设置标签位置 */

        lv_obj_t*menu_lan_gateway3 = lv_obj_create(menu_lan);
        lv_obj_set_size(menu_lan_gateway3, 85, 45);//设置界面大小
        lv_obj_add_style(menu_lan_gateway3, & menu_style1, LV_STATE_DEFAULT);//添加风格
        lv_obj_align(menu_lan_gateway3, LV_ALIGN_CENTER, 100, 0);//位置

            lv_obj_t*lan_gateway3_label = lv_label_create(menu_lan_gateway3); /* 创建文本字体 电压电流*/
            lv_obj_add_style(lan_gateway3_label, &style_menu_Font3, 0);
            lv_obj_set_style_text_align(lan_gateway3_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
            lv_label_set_text(lan_gateway3_label, "002");/* 设置标签文本 */
            lv_obj_align(lan_gateway3_label, LV_ALIGN_CENTER, 0, 0);/* 设置标签位置 */

        lv_obj_t*menu_lan_gateway4 = lv_obj_create(menu_lan);
        lv_obj_set_size(menu_lan_gateway4, 85, 45);//设置界面大小
        lv_obj_add_style(menu_lan_gateway4, & menu_style1, LV_STATE_DEFAULT);//添加风格
        lv_obj_align(menu_lan_gateway4, LV_ALIGN_CENTER, 195, 0);//位置

            lv_obj_t*lan_gateway4_label = lv_label_create(menu_lan_gateway4); /* 创建文本字体 电压电流*/
            lv_obj_add_style(lan_gateway4_label, &style_menu_Font3, 0);
            lv_obj_set_style_text_align(lan_gateway4_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
            lv_label_set_text(lan_gateway4_label, "001");/* 设置标签文本 */
            lv_obj_align(lan_gateway4_label, LV_ALIGN_CENTER, 0, 0);/* 设置标签位置 */

     }


     {
        lv_obj_t*menu_lan_netmask = lv_obj_create(menu_lan);
        lv_obj_set_size(menu_lan_netmask, 100, 45);//设置界面大小
        lv_obj_add_style(menu_lan_netmask, & menu_style2, LV_STATE_DEFAULT);//添加风格
        lv_obj_align(menu_lan_netmask, LV_ALIGN_CENTER, -188, 60);//位置

            lv_obj_t*lan_netmask_label = lv_label_create(menu_lan_netmask); /* 创建文本字体 电压电流*/
            lv_obj_add_style(lan_netmask_label, &style_menu_Font3, 0);
            lv_obj_set_style_text_align(lan_netmask_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
            lv_label_set_text(lan_netmask_label, "netmask");/* 设置标签文本 */
            lv_obj_align(lan_netmask_label, LV_ALIGN_CENTER, 0, 0);/* 设置标签位置 */

        lv_obj_t*menu_lan_netmask1 = lv_obj_create(menu_lan);
        lv_obj_set_size(menu_lan_netmask1, 85, 45);//设置界面大小
        lv_obj_add_style(menu_lan_netmask1, & menu_style1, LV_STATE_DEFAULT);//添加风格
        lv_obj_align(menu_lan_netmask1, LV_ALIGN_CENTER, -90, 60);//位置

            lv_obj_t*lan_netmask1_label = lv_label_create(menu_lan_netmask1); /* 创建文本字体 电压电流*/
            lv_obj_add_style(lan_netmask1_label, &style_menu_Font3, 0);
            lv_obj_set_style_text_align(lan_netmask1_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
            lv_label_set_text(lan_netmask1_label, "255");/* 设置标签文本 */
            lv_obj_align(lan_netmask1_label, LV_ALIGN_CENTER, 0, 0);/* 设置标签位置 */

        lv_obj_t*menu_lan_netmask2 = lv_obj_create(menu_lan);
        lv_obj_set_size(menu_lan_netmask2, 85, 45);//设置界面大小
        lv_obj_add_style(menu_lan_netmask2, & menu_style1, LV_STATE_DEFAULT);//添加风格
        lv_obj_align(menu_lan_netmask2, LV_ALIGN_CENTER, 0, 60);//位置

            lv_obj_t*lan_netmask2_label = lv_label_create(menu_lan_netmask2); /* 创建文本字体 电压电流*/
            lv_obj_add_style(lan_netmask2_label, &style_menu_Font3, 0);
            lv_obj_set_style_text_align(lan_netmask2_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
            lv_label_set_text(lan_netmask2_label, "255");/* 设置标签文本 */
            lv_obj_align(lan_netmask2_label, LV_ALIGN_CENTER, 0, 0);/* 设置标签位置 */

        lv_obj_t*menu_lan_netmask3 = lv_obj_create(menu_lan);
        lv_obj_set_size(menu_lan_netmask3, 85, 45);//设置界面大小
        lv_obj_add_style(menu_lan_netmask3, & menu_style1, LV_STATE_DEFAULT);//添加风格
        lv_obj_align(menu_lan_netmask3, LV_ALIGN_CENTER, 100, 60);//位置

            lv_obj_t*lan_netmask3_label = lv_label_create(menu_lan_netmask3); /* 创建文本字体 电压电流*/
            lv_obj_add_style(lan_netmask3_label, &style_menu_Font3, 0);
            lv_obj_set_style_text_align(lan_netmask3_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
            lv_label_set_text(lan_netmask3_label, "255");/* 设置标签文本 */
            lv_obj_align(lan_netmask3_label, LV_ALIGN_CENTER, 0, 0);/* 设置标签位置 */

        lv_obj_t*menu_lan_netmask4 = lv_obj_create(menu_lan);
        lv_obj_set_size(menu_lan_netmask4, 85, 45);//设置界面大小
        lv_obj_add_style(menu_lan_netmask4, & menu_style1, LV_STATE_DEFAULT);//添加风格
        lv_obj_align(menu_lan_netmask4, LV_ALIGN_CENTER, 195, 60);//位置

            lv_obj_t*lan_netmask4_label = lv_label_create(menu_lan_netmask4); /* 创建文本字体 电压电流*/
            lv_obj_add_style(lan_netmask4_label, &style_menu_Font3, 0);
            lv_obj_set_style_text_align(lan_netmask4_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
            lv_label_set_text(lan_netmask4_label, "000");/* 设置标签文本 */
            lv_obj_align(lan_netmask4_label, LV_ALIGN_CENTER, 0, 0);/* 设置标签位置 */

      }



}
void gpib_init(lv_obj_t*obj)
{
    lv_obj_t*menu_gpib = lv_obj_create(obj);
    lv_obj_set_size(menu_gpib, 400, 200);//设置界面大小
    lv_obj_add_style(menu_gpib, & menu_style1, LV_STATE_DEFAULT);//添加风格
    lv_obj_align(menu_gpib, LV_ALIGN_CENTER, 0, 0);//位置

    lv_obj_t*menu_gpib1 = lv_obj_create(obj);
    lv_obj_set_size(menu_gpib1, 150, 50);//设置界面大小
    lv_obj_add_style(menu_gpib1, & menu_style2, LV_STATE_DEFAULT);//添加风格
    lv_obj_align(menu_gpib1, LV_ALIGN_CENTER, 0, -60);//位置

        lv_obj_t*gpib_label = lv_label_create(menu_gpib1); /* 创建文本字体 电压电流*/
        lv_obj_add_style(gpib_label, &style_menu_Font1, 0);
        lv_obj_set_style_text_align(gpib_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
        lv_label_set_text(gpib_label, "GPIB");/* 设置标签文本 */
        lv_obj_align(gpib_label, LV_ALIGN_CENTER, 0, 0);/* 设置标签位置 */

    lv_obj_t*menu_gpib2 = lv_obj_create(obj);
    lv_obj_set_size(menu_gpib2, 350, 120);//设置界面大小
    lv_obj_add_style(menu_gpib2, & menu_style1, LV_STATE_DEFAULT);//添加风格
    lv_obj_align(menu_gpib2, LV_ALIGN_CENTER, 0, 30);//位置

        lv_obj_t*menu_gpib3 = lv_obj_create(menu_gpib2);
        lv_obj_set_size(menu_gpib3, 150, 50);//设置界面大小
        lv_obj_add_style(menu_gpib3, & menu_style2, LV_STATE_DEFAULT);//添加风格
        lv_obj_align(menu_gpib3, LV_ALIGN_CENTER, -80, 0);//位置

                lv_obj_t*gpib3_label = lv_label_create(menu_gpib3); /* 创建文本字体 电压电流*/
                lv_obj_add_style(gpib3_label, &style_menu_Font2, 0);
                lv_obj_set_style_text_align(gpib3_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
                lv_label_set_text(gpib3_label, "address");/* 设置标签文本 */
                lv_obj_align(gpib3_label, LV_ALIGN_CENTER, 0, 0);/* 设置标签位置 */

        lv_obj_t*menu_gpib4 = lv_obj_create(menu_gpib2);
        lv_obj_set_size(menu_gpib4, 160, 50);//设置界面大小
        lv_obj_add_style(menu_gpib4, & menu_style1, LV_STATE_DEFAULT);//添加风格
        lv_obj_align(menu_gpib4, LV_ALIGN_CENTER, 80, 0);//位置

            lv_obj_t*gpib4_label = lv_label_create(menu_gpib4); /* 创建文本字体 电压电流*/
            lv_obj_add_style(gpib4_label, &style_menu_Font2, 0);
            lv_obj_set_style_text_align(gpib4_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* 设置标签文本对齐方式 */
            lv_label_set_text(gpib4_label, "00");/* 设置标签文本 */
            lv_obj_align(gpib4_label, LV_ALIGN_CENTER, 0, 0);/* 设置标签位置 */

}
