#include "demos/lvgl_app/lvgl_app.h/screen.h"
#include "lvgl.h"


LV_IMG_DECLARE(oscilloscope_set);
lv_style_t style_oscilloscope_Font;


static const lv_coord_t example_data[] = {
    25, 26, 27, 29, 30, 31, 32, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45,
    45, 46, 47, 47, 48, 48, 49, 49, 49, 50, 50, 50, 50, 50, 50, 50, 50, 49, 49,
    49, 48, 48, 47, 47, 46, 45, 44, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 33,
    32, 31, 30, 29, 27, 26, 25, 24, 22, 21, 20, 19, 17, 16, 15, 14, 13, 12, 11,
    10, 9, 8, 7, 6, 5, 5, 4, 3, 3, 2, 2, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1,
    1, 2, 2, 3, 4, 4, 5, 6, 6, 7, 8, 9, 10, 11, 12, 13, 15, 16, 17, 18, 19, 20,
    22, 23, 24, 25, 27, 28, 29, 30, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42,
    43, 44, 45, 46, 46, 47, 47, 48, 48, 49, 49, 49, 50, 50, 50, 50, 50, 50, 50,
    50, 49, 49, 49, 48, 48, 47, 46, 46, 45, 44, 43, 42, 42, 41, 40, 39, 38, 36,
    35, 34, 33, 32, 31, 29, 28, 27, 26, 24, 23, 22, 21, 19, 18, 17, 16, 15, 14,
    12, 11, 10, 9, 8, 8, 7, 6, 5, 4, 4, 3, 2, 2, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0,
    0, 1, 1, 1, 2, 2, 3, 3, 4, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
    18, 20, 21, 22, 23, 25, 26, 27, 28, 30, 31, 32, 33, 34, 36, 37, 38, 39, 40,
    41, 42, 43, 44, 44, 45, 46, 46, 47, 48, 48, 49, 49, 49, 50, 50, 50, 50, 50,
    50, 50, 50, 49, 49, 49, 48, 48, 47, 47, 46, 45, 45, 44, 43, 42, 41, 40, 39,
    38, 37, 36, 35, 34, 33, 31, 30, 29, 28, 26, 25, 24, 23, 21, 20, 19, 18, 17,
    15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 6, 5, 4, 3, 3, 2, 2, 1, 1, 1, 0, 0, 0,
    0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 7, 8, 9, 10, 11, 12, 13,
    14, 15, 16, 18, 19, 20, 21, 23, 24, 25, 26, 28, 29, 30, 31, 32, 34, 35, 36,
    37, 38, 39, 40, 41, 42, 43, 44, 45, 45, 46, 47, 47, 48, 48, 49, 49, 49, 50,
    50, 50, 50, 50, 50, 50, 50, 49, 49, 49, 48, 48, 47, 47, 46, 45, 44, 44, 43,
    42, 41, 40, 39, 38, 37, 36, 35, 33, 32, 31, 30, 29, 27, 26, 25, 24, 22, 21,
    20, 19, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 5, 4, 3, 3, 2, 2, 1,
    1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 3, 4, 4, 5, 6, 7, 7, 8, 9, 10,
    11, 12, 13, 15, 16, 17, 18, 19, 20, 22, 23, 24, 25, 27, 28, 29, 30, 32, 33,
    34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 46, 47, 47, 48, 48, 49,
    49, 49, 50, 50, 50, 50, 50, 50, 50, 50, 49, 49, 49, 48, 48, 47, 46, 46, 45,
    44, 43, 42, 42, 41, 40, 39, 38, 36, 35, 34, 33, 32, 31, 29, 28, 27, 26, 24,
    23, 22, 21, 19, 18, 17, 16, 15, 14, 12, 11, 10, 9, 8, 7, 7, 6, 5, 4, 4, 3,
    2, 2, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 3, 3, 4, 4, 5, 6, 7,
    8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 20, 21, 22, 23, 25, 26, 27, 28,
    30, 31, 32, 33, 34, 36, 37, 38, 39, 40, 41, 42, 43, 44, 44, 45, 46, 46, 47,
    48, 48, 49, 49, 49, 50, 50, 50, 50, 50, 50, 50, 50, 49, 49, 49, 48, 48, 47,
    47, 46, 45, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 31, 30, 29,
    28, 26, 25, 24, 23, 21, 20, 19, 18, 17, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6,
    6, 5, 4, 3, 3, 2, 2, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 3, 3,
    4, 5, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 18, 19, 20, 21, 23, 24, 25,
    26, 28, 29, 30, 31, 32, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 45,
    46, 47, 47, 48, 48, 49, 49, 49, 50, 50, 50, 50, 50, 50, 50, 50, 49, 49, 49,
    48, 48, 47, 47, 46, 45, 44, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 33, 32,
    31, 30, 29, 27, 26, 25, 24, 22, 21, 20, 19, 17, 16, 15, 14, 13, 12, 11, 10,
    9, 8, 7, 6, 5, 5, 4, 3, 3, 2, 2, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1,
    2, 2, 3, 4, 4, 5, 6, 7, 7, 8, 9, 10, 11, 12, 13, 15, 16, 17, 18, 19, 20,
    22, 23, 24, 25, 27, 28, 29, 30, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42,
    43, 44, 45, 46, 46, 47, 47, 48, 48, 49, 49, 49, 50, 50, 50, 50, 50, 50, 50,
    50, 49, 49, 49, 48, 48, 47, 46, 46, 45, 44, 43, 42, 42, 41, 40, 39, 38, 36,
    35, 34, 33, 32, 31, 29, 28, 27, 26, 24, 23, 22, 21, 19, 18, 17, 16, 15, 14,
    12, 11, 10, 9, 8, 7, 7, 6, 5, 4, 4, 3, 2, 2, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0,
    0, 1, 1, 1, 2, 2, 3, 3, 4, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
};


void lvgl_oscilloscope_style(void)
{

        //??????
    lv_style_init(&style_oscilloscope_Font);/* ??????????????? */
    lv_style_set_text_color(&style_oscilloscope_Font, lv_color_white());//??????????????????
    lv_style_set_text_font(&style_oscilloscope_Font, &lv_font_montserrat_20); /* ?????????????????? */


}

void oscilloscope_init(lv_obj_t*obj)
{

    lvgl_oscilloscope_style();




    lv_obj_t*oscilloscope_img = lv_img_create(obj);//??????????????????
    lv_img_set_src(oscilloscope_img, &oscilloscope_set);//????????????
    lv_obj_align(oscilloscope_img, LV_ALIGN_TOP_MID, 0, 0);//??????

    lv_obj_t*oscilloscope_label_title = lv_label_create(oscilloscope_img); /* ?????????????????? ????????????*/
    lv_obj_add_style(oscilloscope_label_title, &style_oscilloscope_Font, 0);
    lv_obj_set_style_text_align(oscilloscope_label_title, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* ?????????????????????????????? */
    lv_label_set_text(oscilloscope_label_title, "my oscilloscope");/* ?????????????????? */
    lv_obj_align(oscilloscope_label_title, LV_ALIGN_CENTER, -50, -182);/* ?????????????????? */

    {

        lv_obj_t*oscilloscope_label_t_scale = lv_label_create(oscilloscope_img); /* ?????????????????? ????????????*/
        lv_obj_add_style(oscilloscope_label_t_scale, &style_oscilloscope_Font, 0);
        lv_obj_set_style_text_align(oscilloscope_label_t_scale, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* ?????????????????????????????? */
        lv_label_set_text(oscilloscope_label_t_scale, "t_scale");/* ?????????????????? */
        lv_obj_align(oscilloscope_label_t_scale, LV_ALIGN_CENTER, 350, -167);/* ?????????????????? */

            lv_obj_t*oscilloscope_label_t_scale1 = lv_label_create(oscilloscope_img); /* ?????????????????? ????????????*/
            lv_obj_add_style(oscilloscope_label_t_scale1, &style_oscilloscope_Font, 0);
            lv_obj_set_style_text_align(oscilloscope_label_t_scale1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* ?????????????????????????????? */
            lv_label_set_text(oscilloscope_label_t_scale1, "20ms");/* ?????????????????? */
            lv_obj_align(oscilloscope_label_t_scale1, LV_ALIGN_CENTER, 350, -137);/* ?????????????????? */


        lv_obj_t*oscilloscope_label_u_scale = lv_label_create(oscilloscope_img); /* ?????????????????? ????????????*/
        lv_obj_add_style(oscilloscope_label_u_scale, &style_oscilloscope_Font, 0);
        lv_obj_set_style_text_align(oscilloscope_label_u_scale, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* ?????????????????????????????? */
        lv_label_set_text(oscilloscope_label_u_scale, "u_scale");/* ?????????????????? */
        lv_obj_align(oscilloscope_label_u_scale, LV_ALIGN_CENTER, 350, -92);/* ?????????????????? */

            lv_obj_t*oscilloscope_label_u_scale1 = lv_label_create(oscilloscope_img); /* ?????????????????? ????????????*/
            lv_obj_add_style(oscilloscope_label_u_scale1, &style_oscilloscope_Font, 0);
            lv_obj_set_style_text_align(oscilloscope_label_u_scale1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* ?????????????????????????????? */
            lv_label_set_text(oscilloscope_label_u_scale1, "1v");/* ?????????????????? */
            lv_obj_align(oscilloscope_label_u_scale1, LV_ALIGN_CENTER, 350, -62);/* ?????????????????? */

        lv_obj_t*oscilloscope_label_xpos = lv_label_create(oscilloscope_img); /* ?????????????????? ????????????*/
        lv_obj_add_style(oscilloscope_label_xpos, &style_oscilloscope_Font, 0);
        lv_obj_set_style_text_align(oscilloscope_label_xpos, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* ?????????????????????????????? */
        lv_label_set_text(oscilloscope_label_xpos, "xpos");/* ?????????????????? */
        lv_obj_align(oscilloscope_label_xpos, LV_ALIGN_CENTER, 350, -15);/* ?????????????????? */

            lv_obj_t*oscilloscope_label_xpos1 = lv_label_create(oscilloscope_img); /* ?????????????????? ????????????*/
            lv_obj_add_style(oscilloscope_label_xpos1, &style_oscilloscope_Font, 0);
            lv_obj_set_style_text_align(oscilloscope_label_xpos1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* ?????????????????????????????? */
            lv_label_set_text(oscilloscope_label_xpos1, "0.00ns");/* ?????????????????? */
            lv_obj_align(oscilloscope_label_xpos1, LV_ALIGN_CENTER, 350, 15);/* ?????????????????? */

        lv_obj_t*oscilloscope_label_ypos = lv_label_create(oscilloscope_img); /* ?????????????????? ????????????*/
        lv_obj_add_style(oscilloscope_label_ypos, &style_oscilloscope_Font, 0);
        lv_obj_set_style_text_align(oscilloscope_label_ypos, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* ?????????????????????????????? */
        lv_label_set_text(oscilloscope_label_ypos, "ypos");/* ?????????????????? */
        lv_obj_align(oscilloscope_label_ypos, LV_ALIGN_CENTER, 350, 57);/* ?????????????????? */

            lv_obj_t*oscilloscope_label_ypos1 = lv_label_create(oscilloscope_img); /* ?????????????????? ????????????*/
            lv_obj_add_style(oscilloscope_label_ypos1, &style_oscilloscope_Font, 0);
            lv_obj_set_style_text_align(oscilloscope_label_ypos1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* ?????????????????????????????? */
            lv_label_set_text(oscilloscope_label_ypos1, "0.00mv");/* ?????????????????? */
            lv_obj_align(oscilloscope_label_ypos1, LV_ALIGN_CENTER, 350, 90);/* ?????????????????? */

        lv_obj_t*oscilloscope_label_t_thr = lv_label_create(oscilloscope_img); /* ?????????????????? ????????????*/
        lv_obj_add_style(oscilloscope_label_t_thr, &style_oscilloscope_Font, 0);
        lv_obj_set_style_text_align(oscilloscope_label_t_thr, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* ?????????????????????????????? */
        lv_label_set_text(oscilloscope_label_t_thr, "t_thr");/* ?????????????????? */
        lv_obj_align(oscilloscope_label_t_thr, LV_ALIGN_CENTER, 350, 135);/* ?????????????????? */

            lv_obj_t*oscilloscope_label_t_thr1 = lv_label_create(oscilloscope_img); /* ?????????????????? ????????????*/
            lv_obj_add_style(oscilloscope_label_t_thr1, &style_oscilloscope_Font, 0);
            lv_obj_set_style_text_align(oscilloscope_label_t_thr1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* ?????????????????????????????? */
            lv_label_set_text(oscilloscope_label_t_thr1, "0.00mv");/* ?????????????????? */
            lv_obj_align(oscilloscope_label_t_thr1, LV_ALIGN_CENTER, 350, 167);/* ?????????????????? */
    }



    lv_obj_t*oscilloscope_label_freq = lv_label_create(oscilloscope_img); /* ?????????????????? ????????????*/
    lv_obj_add_style(oscilloscope_label_freq, &style_oscilloscope_Font, 0);
    lv_obj_set_style_text_align(oscilloscope_label_freq, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* ?????????????????????????????? */
    lv_label_set_text(oscilloscope_label_freq, "freq:----");/* ?????????????????? */
    lv_obj_align(oscilloscope_label_freq, LV_ALIGN_CENTER, -200, 182);/* ?????????????????? */

    lv_obj_t*oscilloscope_label_vpp = lv_label_create(oscilloscope_img); /* ?????????????????? ????????????*/
    lv_obj_add_style(oscilloscope_label_vpp, &style_oscilloscope_Font, 0);
    lv_obj_set_style_text_align(oscilloscope_label_vpp, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);/* ?????????????????????????????? */
    lv_label_set_text(oscilloscope_label_vpp, "Vp-p:----");/* ?????????????????? */
    lv_obj_align(oscilloscope_label_vpp, LV_ALIGN_CENTER, 120, 182);/* ?????????????????? */



    lv_obj_t* chart = lv_chart_create(oscilloscope_img);/* ???????????????????????? */
    lv_obj_set_size(chart, 700, 340); /* ?????????????????? */
    lv_chart_set_range(chart, LV_CHART_AXIS_PRIMARY_Y, -5, 55); /* ????????????Y???????????????????????? */
    lv_obj_set_style_size(chart, 0, LV_PART_INDICATOR);/* ???????????????????????? */
    lv_chart_series_t* ser = lv_chart_add_series(chart, lv_palette_main(LV_PALETTE_RED), LV_CHART_AXIS_PRIMARY_Y); /* ??????????????????????????????????????? */
    uint32_t pcnt = sizeof(example_data) / sizeof(example_data[0]);/* ?????????????????????????????? */
    lv_chart_set_point_count(chart, pcnt); /* ??????????????????????????????????????? */
    lv_chart_set_ext_y_array(chart, ser, (lv_coord_t*)example_data);/* ???Y???????????????????????????????????? */
    lv_obj_align(chart, LV_ALIGN_CENTER, -50, 0); /* ?????????????????? */
}
