#include "print.h"

void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    set_print_position(10 ,5)
    print_str("Welcome To 64bit kernel");
}