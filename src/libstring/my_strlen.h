#ifndef MY_STRLEN_H
#define MY_STRLEN_H

#include <stddef.h> // For size_t

/**
 * Calculate the length of a string
 * 
 * @param s String to measure (must be null-terminated)
 * @return Number of characters in string (excluding null terminator)
 */
size_t my_strlen(const char s[]);

#endif // MY_STRLEN_H
