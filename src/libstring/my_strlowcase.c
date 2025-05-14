#include "my_strlowcase.h"

void my_strlowcase(char str[]) {
    for (size_t i = 0; str[i] != '\0'; i++) {
        // Check if character is uppercase (A-Z)
        if (str[i] >= 'A' && str[i] <= 'Z') {
            // Convert to lowercase by adding the ASCII difference between 'a' and 'A'
            str[i] = str[i] + ('a' - 'A');
        }
    }
}