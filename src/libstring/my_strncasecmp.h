#ifndef MY_STRNCASECMP_H
#define MY_STRNCASECMP_H

#include <stddef.h> // For size_t

/**
 * Compare two strings lexicographically, ignoring case, comparing at most n characters
 *
 * @param s1 First string to compare
 * @param s2 Second string to compare
 * @param n Maximum number of characters to compare
 * @return An integer less than, equal to, or greater than zero if the first n bytes of s1 are found,
 *         respectively, to be less than, to match, or be greater than the first n bytes of s2
 *         when ignoring case differences
 */
int my_strncasecmp(const char s1[], const char s2[], size_t n);

#endif // MY_STRNCASECMP_H