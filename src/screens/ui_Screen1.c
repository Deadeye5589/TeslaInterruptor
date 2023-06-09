// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.2.0
// Project name: Interocitor

#include "../ui.h"

void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_img_src(ui_Screen1, &ui_img_teslabackground_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Frame = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_Frame, &ui_img_interocitor_frame_png);
    lv_obj_set_width(ui_Frame, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Frame, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Frame, -89);
    lv_obj_set_y(ui_Frame, 0);
    lv_obj_set_align(ui_Frame, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Frame, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Frame, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Pause = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_Pause, &ui_img_interocitor_pause_button_png);
    lv_obj_set_width(ui_Pause, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Pause, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Pause, -89);
    lv_obj_set_y(ui_Pause, 0);
    lv_obj_set_align(ui_Pause, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Pause, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Pause, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_opa(ui_Pause, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Play = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_Play, &ui_img_interocitor_play_button_png);
    lv_obj_set_width(ui_Play, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Play, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Play, -89);
    lv_obj_set_y(ui_Play, 0);
    lv_obj_set_align(ui_Play, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Play, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Play, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_opa(ui_Play, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SongSelect = lv_roller_create(ui_Screen1);
    lv_roller_set_options(ui_SongSelect,
                          "Imperial March\n8Bit Lagerfeuer\nTerminator\nThe Best\nKilling in the Name Of\n\n", LV_ROLLER_MODE_NORMAL);
    lv_obj_set_width(ui_SongSelect, 160);
    lv_obj_set_height(ui_SongSelect, 100);
    lv_obj_set_x(ui_SongSelect, 70);
    lv_obj_set_y(ui_SongSelect, 6);
    lv_obj_set_align(ui_SongSelect, LV_ALIGN_CENTER);
    lv_obj_set_style_border_color(ui_SongSelect, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_SongSelect, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_SongSelect, 4, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_IPLable = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_IPLable, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_IPLable, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_IPLable, 105);
    lv_obj_set_y(ui_IPLable, -67);
    lv_obj_set_align(ui_IPLable, LV_ALIGN_CENTER);
    lv_label_set_text(ui_IPLable, "192.168.2.111");
    lv_obj_set_style_text_font(ui_IPLable, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_IPValue = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_IPValue, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_IPValue, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_IPValue, 59);
    lv_obj_set_y(ui_IPValue, -67);
    lv_obj_set_align(ui_IPValue, LV_ALIGN_CENTER);
    lv_label_set_text(ui_IPValue, "IP:");
    lv_obj_set_style_text_font(ui_IPValue, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

}
