#ifndef MY_STRCASECMP_H
#define MY_STRCASECMP_H

#include <stddef.h> // For size_t

/**
 * Compare two strings lexicographically, ignoring case
 *
 * @param s1 First string to compare
 * @param s2 Second string to compare
 * @return An integer less than, equal to, or greater than zero if s1 is found,
 *         respectively, to be less than, to match, or be greater than s2 when
 *         ignoring case differences
 */
int my_strcasecmp(const char s1[], const char s2[]);

#endif // MY_STRCASECMP_H