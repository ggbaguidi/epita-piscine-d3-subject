#include "my_strupcase.h"

void my_strupcase(char str[]) {
    for (size_t i = 0; str[i] != '\0'; i++) {
        // Check if character is lowercase (a-z)
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Convert to uppercase by subtracting the ASCII difference between 'a' and 'A'
            str[i] = str[i] - ('a' - 'A');
        }
    }
}
