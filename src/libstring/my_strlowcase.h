#ifndef MY_STRLOWCASE_H
#define MY_STRLOWCASE_H

#include <stddef.h> // For size_t

/**
 * Convert all uppercase ASCII letters in a string to lowercase
 *
 * @param str String to modify (must be null-terminated)
 */
void my_strlowcase(char str[]);

#endif // MY_STRLOWCASE_H