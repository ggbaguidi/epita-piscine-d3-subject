#ifndef MY_STRCMP_H
#define MY_STRCMP_H

#include <stddef.h> // For size_t

/**
 * Compare two strings lexicographically
 *
 * @param s1 First string to compare
 * @param s2 Second string to compare
 * @return An integer less than, equal to, or greater than zero if s1 is found,
 *         respectively, to be less than, to match, or be greater than s2
 */
int my_strcmp(const char s1[], const char s2[]);

#endif // MY_STRCMP_H