#include "my_strcmp.h"

int my_strcmp(const char s1[], const char s2[]) {
    size_t i = 0;
    
    // Compare characters until we find a difference or reach the end of a string
    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]) {
        i++;
    }
    
    // Return the difference between the characters where they first differ
    // If we reached the end of one or both strings, this will still work correctly
    return (unsigned char)s1[i] - (unsigned char)s2[i];
}