#include "my_strncmp.h"

int my_strncmp(const char s1[], const char s2[], size_t n) {
    // If n is 0, strings are considered equal according to strncmp spec
    if (n == 0)
        return 0;
        
    size_t i = 0;
    
    // Compare characters until we find a difference, reach the end of a string, or reach n characters
    while (i < n - 1 && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]) {
        i++;
    }
    
    // Return the difference between the characters where they first differ
    // If we reached n or the end of one or both strings, this will still work correctly
    return (unsigned char)s1[i] - (unsigned char)s2[i];
}