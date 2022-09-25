/* Copyright 2021 HorrorTroll <https://github.com/HorrorTroll>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

// OLED animation
#include "lib/wave.h"

#ifdef OLED_ENABLE
    static void render_lock_info(void) {
        led_t led_usb_state = host_keyboard_led_state();

        oled_write_P(led_usb_state.caps_lock ? PSTR("CAPLK ") : PSTR("----- "), false);
        // oled_write_P(PSTR(" GOPOLAR "), false);
        oled_write_P(PSTR("  CZ!!!  "), false);
        oled_write_P(led_usb_state.scroll_lock ? PSTR(" SCRLK") : PSTR(" -----"), false);
        // switch (get_highest_layer(layer_state)) {
        //     case 0:
        //         oled_write_P(PSTR("        CZ!?         "), false);
        //         break;
        //     case 1:
        //         oled_write_P(PSTR("      Function       "), false);
        //         break;
        //     default:
        //         oled_write_P(PSTR("      Undefined      "), false);
        // }
    }

    // static void render_layer_number(void) {
    //     switch (get_highest_layer(layer_state)) {
    //         case 0:
    //             oled_write_P(PSTR("0"), false);
    //             break;
    //         case 1:
    //             oled_write_P(PSTR("1"), false);
    //             break;
    //         default:
    //             oled_write_P(PSTR("X"), false);
    //     }
    // }

    static void render_rgb_matrix_name(void) {
        switch (rgb_matrix_get_mode()) {
            case RGB_MATRIX_CUSTOM_COOL_DIAGONAL:
                oled_write_P(PSTR("DIAGONL"), false);
                break;
            case RGB_MATRIX_CUSTOM_FLOWER_BLOOMING:
                oled_write_P(PSTR("FLWRBLM"), false);
                break;
            case RGB_MATRIX_CUSTOM_RAINBOW_REACTIVE_SIMPLE:
                oled_write_P(PSTR("RBWRCTS"), false);
                break;
            case RGB_MATRIX_RAINDROPS:
                oled_write_P(PSTR("RNDROPS"), false);
                break;
            case RGB_MATRIX_JELLYBEAN_RAINDROPS:
                oled_write_P(PSTR("JLRNDRS"), false);
                break;
            default:
                oled_write_P(PSTR("GRDIENT"), false);
                break;
        }
    }

    static void render_layer_info(void) {
        switch (get_highest_layer(layer_state)) {
            case 0:
                oled_write_P(PSTR(" QWERTY "), false);
                break;
            case 1:
                oled_write_P(PSTR("FUNCTION"), false);
                break;
            default:
                oled_write_P(PSTR("  X X!  "), false);
        }
    }

    bool oled_task_user(void) {
        render_lock_info();

        // sleep if it has been long enough since we last got a char
        if (timer_elapsed32(wave_sleep) > OLED_TIMEOUT) {
            oled_off();
        } else {
            oled_on();
        }
        // time for the next frame?
        if (timer_elapsed(wave_timer) > FRAME_TIMEOUT) {
            wave_timer = timer_read();
            render_frame();
        }

        oled_set_cursor(0, 3);
        render_rgb_matrix_name();
        oled_write_P(PSTR("      "), false);
        render_layer_info();

        return true;
    }
#endif
