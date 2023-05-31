// copyright 2023 sekigon-gonnoc
// spdx-license-identifier: gpl-2.0-or-later

#pragma once

#include <stdint.h>
#include "action.h"

#define ACTIVE_APP_CNT_MAX 32
#define COMBO_LEN_MAX 128
#define TAPDANCE_LEN_MAX 128

typedef enum {
    LANG_US,
    LANG_JP,
} LANGUAGE_TYPE;

void print_config(void);
void print_app(void);
void dynamic_config_init(void);
void dynamic_config_activate_default_apps(void);
void set_active_apps(uint8_t *p_apps, uint8_t len);
bool process_record_dynamic_config(uint16_t keycode, keyrecord_t *record);
void set_kc_no_remap(uint16_t kc);
void dynamic_config_task(void);
void print_companion_app(void);
void send_config_file(void);
void send_bootstrap_macro(void);

// Loading config file
void cdc_config_load_cb(const uint8_t *buf, uint32_t cnt);
void pre_load_config_file(uint32_t length);
void load_config_file(void);
void post_load_config_file(void);

// Language setting
void          set_keyboard_language(LANGUAGE_TYPE lang);
void          set_os_language(LANGUAGE_TYPE lang);
LANGUAGE_TYPE get_keyboard_language(void);
LANGUAGE_TYPE get_os_language(void);

uint16_t get_mouse_gesture_threshold(void);