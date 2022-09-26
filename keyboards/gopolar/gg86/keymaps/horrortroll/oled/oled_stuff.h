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
        // oled_write_P(PSTR("-------"), false);
        switch (rgb_matrix_get_mode()) {
            // case RGB_MATRIX_CUSTOM_CUSTOM_GRADIENT:
            //     oled_write_P(PSTR("GRDIENT"), false);
            //     break;
            // case RGB_MATRIX_CUSTOM_COOL_DIAGONAL:
            //     oled_write_P(PSTR("DIAGONL"), false);
            //     break;
            case RGB_MATRIX_CUSTOM_FLOWER_BLOOMING:
                oled_write_P(PSTR("FLWRBLM"), false);
                break;
            case RGB_MATRIX_CUSTOM_RAINBOW_REACTIVE_SIMPLE:
                oled_write_P(PSTR("RNBWRCT"), false);
                break;
            case RGB_MATRIX_ALPHAS_MODS:
                oled_write_P(PSTR("ALPHAMD"), false);
                break;
            // case RGB_MATRIX_GRADIENT_UP_DOWN:
            //     oled_write_P(PSTR("GRDUPDW"), false);
            //     break;
            // case RGB_MATRIX_GRADIENT_LEFT_RIGHT:
            //     oled_write_P(PSTR("GRDLTRT"), false);
            //     break;
            // case RGB_MATRIX_BREATHING:
            //     oled_write_P(PSTR("BREATHI"), false);
            //     break;
            // case RGB_MATRIX_BAND_SAT:
            //     oled_write_P(PSTR("BANDSAT"), false);
            //     break;
            // case RGB_MATRIX_BAND_VAL:
            //     oled_write_P(PSTR("BANDVAL"), false);
            //     break;
            // case RGB_MATRIX_BAND_PINWHEEL_SAT:
            //     oled_write_P(PSTR("BPNWHLS"), false);
            //     break;
            // case RGB_MATRIX_BAND_PINWHEEL_VAL:
            //     oled_write_P(PSTR("BPNWHLV"), false);
            //     break;
            // case RGB_MATRIX_BAND_SPIRAL_SAT:
            //     oled_write_P(PSTR("BSPRLST"), false);
            //     break;
            // case RGB_MATRIX_BAND_SPIRAL_VAL:
            //     oled_write_P(PSTR("BSPRLVL"), false);
            //     break;
            // case RGB_MATRIX_CYCLE_ALL:
            //     oled_write_P(PSTR("CYCLEAL"), false);
            //     break;
            // case RGB_MATRIX_CYCLE_LEFT_RIGHT:
            //     oled_write_P(PSTR("CYCLELR"), false);
            //     break;
            // case RGB_MATRIX_CYCLE_UP_DOWN:
            //     oled_write_P(PSTR("CYCLEUD"), false);
            //     break;
            // case RGB_MATRIX_RAINBOW_MOVING_CHEVRON:
            //     oled_write_P(PSTR("RBCHVRN"), false);
            //     break;
            // case RGB_MATRIX_CYCLE_OUT_IN:
            //     oled_write_P(PSTR("CYCLEOI"), false);
            //     break;
            // case RGB_MATRIX_CYCLE_OUT_IN_DUAL:
            //     oled_write_P(PSTR("CYCOIDL"), false);
            //     break;
            // case RGB_MATRIX_CYCLE_PINWHEEL:
            //     oled_write_P(PSTR("CYCPWHL"), false);
            //     break;
            // case RGB_MATRIX_CYCLE_SPIRAL:
            //     oled_write_P(PSTR("CYCSPRL"), false);
            //     break;
            // case RGB_MATRIX_DUAL_BEACON:
            //     oled_write_P(PSTR("DULBEAC"), false);
            //     break;
            // case RGB_MATRIX_RAINBOW_BEACON:
            //     oled_write_P(PSTR("RBWBEAC"), false);
            //     break;
            // case RGB_MATRIX_RAINBOW_PINWHEELS:
            //     oled_write_P(PSTR("RBPNWHL"), false);
            //     break;
            case RGB_MATRIX_RAINDROPS:
                oled_write_P(PSTR("RAINDRP"), false);
                break;
            case RGB_MATRIX_JELLYBEAN_RAINDROPS:
                oled_write_P(PSTR("JLYRAIN"), false);
                break;
            case RGB_MATRIX_HUE_BREATHING:
                oled_write_P(PSTR("HUEBREA"), false);
                break;
            case RGB_MATRIX_HUE_PENDULUM:
                oled_write_P(PSTR("HUEPEND"), false);
                break;
            case RGB_MATRIX_HUE_WAVE:
                oled_write_P(PSTR("HUEWAVE"), false);
                break;
            // case RGB_MATRIX_PIXEL_FRACTAL:
            //     oled_write_P(PSTR("PXLFRAC"), false);
            //     break;
            // case RGB_MATRIX_PIXEL_FLOW:
            //     oled_write_P(PSTR("PXLFLOW"), false);
            //     break;
            case RGB_MATRIX_PIXEL_RAIN:
                oled_write_P(PSTR("PXLRAIN"), false);
                break;
            case RGB_MATRIX_SOLID_REACTIVE_SIMPLE:
                oled_write_P(PSTR("RCTSIMP"), false);
                break;
            case RGB_MATRIX_SOLID_REACTIVE:
                oled_write_P(PSTR("REACTVE"), false);
                break;
            case RGB_MATRIX_SOLID_REACTIVE_WIDE:
                oled_write_P(PSTR("SRCWIDE"), false);
                break;
            case RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE:
                oled_write_P(PSTR("MLTWIDE"), false);
                break;
            case RGB_MATRIX_SOLID_REACTIVE_CROSS:
                oled_write_P(PSTR(" CROSS "), false);
                break;
            case RGB_MATRIX_SOLID_REACTIVE_MULTICROSS:
                oled_write_P(PSTR("MLTCRSS"), false);
                break;
            case RGB_MATRIX_SOLID_REACTIVE_NEXUS:
                oled_write_P(PSTR(" NEXUS "), false);
                break;
            case RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS:
                oled_write_P(PSTR("MLTNXUS"), false);
                break;
            case RGB_MATRIX_SPLASH:
                oled_write_P(PSTR("SPLASH "), false);
                break;
            case RGB_MATRIX_MULTISPLASH:
                oled_write_P(PSTR("MTSPLSH"), false);
                break;
            case RGB_MATRIX_SOLID_SPLASH:
                oled_write_P(PSTR("SDSPLSH"), false);
                break;
            case RGB_MATRIX_SOLID_MULTISPLASH:
                oled_write_P(PSTR("SMSPLSH"), false);
                break;
            default:
                oled_write_P(PSTR("-------"), false);
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
                oled_write_P(PSTR("--------"), false);
        }
    }

    bool oled_task_user(void) {
        render_lock_info();
        led_t led_usb_state = host_keyboard_led_state();

        if (timer_elapsed32(wave_sleep) > RGBLIGHT_TIMEOUT) {
            oled_off();
        } else {
            // sleep if it has been long enough since we last got a char
            if (timer_elapsed32(wave_sleep) > OLED_TIMEOUT) {
                // if CAPSLCK or SCRLK are on, dont put sleep unless > RGBLIGHT_TIMEOUT 
                if (!led_usb_state.caps_lock && !led_usb_state.scroll_lock) {
                    oled_off();
                }
            } else {
                oled_on();
            }
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
