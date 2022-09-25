RGB_MATRIX_EFFECT(COOL_DIAGONAL)
RGB_MATRIX_EFFECT(FLOWER_BLOOMING)
RGB_MATRIX_EFFECT(RAINBOW_REACTIVE_SIMPLE)

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

#include "led/cool_diagonal.c"
#include "led/flower_blooming/flower_blooming.c"
#include "led/rainbow_reactive_simple/rainbow_reactive_simple.c"

#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS
