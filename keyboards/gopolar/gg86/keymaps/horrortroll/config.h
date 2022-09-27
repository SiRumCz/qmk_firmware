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

#pragma once

#define DYNAMIC_KEYMAP_LAYER_COUNT 2
#define NO_ACTION_ONESHOT

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Forcing to use NKRO instead 6KRO */
#define FORCE_NKRO

#define RGBLIGHT_SLEEP /* If defined, the RGB lighting will be switched off when the host goes to sleep */
#define RGBLIGHT_TIMEOUT 60000 /* switch off RGB when no keypress after 10 min */
#define RGBLIGHT_ANIMATIONS

#ifdef RGB_MATRIX_ENABLE
    /* RGB Matrix effect */
    #undef ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
    #undef ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
    #undef ENABLE_RGB_MATRIX_BAND_SAT
    #undef ENABLE_RGB_MATRIX_BAND_VAL
    #undef ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
    #undef ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
    #undef ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
    #undef ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
    #undef ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
    #undef ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
    #undef ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
    #undef ENABLE_RGB_MATRIX_DUAL_BEACON
    #undef ENABLE_RGB_MATRIX_RAINBOW_BEACON
    #undef ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
    // #undef ENABLE_RGB_MATRIX_RAINDROPS
    // #undef ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
    // #undef ENABLE_RGB_MATRIX_HUE_WAVE
    // #undef ENABLE_RGB_MATRIX_PIXEL_FRACTAL
    // #undef ENABLE_RGB_MATRIX_PIXEL_FLOW
    // #undef ENABLE_RGB_MATRIX_PIXEL_RAIN

    // #undef ENABLE_RGB_MATRIX_SOLID_REACTIVE
    // #undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
    // #undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
    // #undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
    // #undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
    // #undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
    // #undef ENABLE_RGB_MATRIX_SPLASH
    // #undef ENABLE_RGB_MATRIX_SOLID_SPLASH
    // #undef ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
    
    #define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_CUSTOM_FLOWER_BLOOMING
#endif
