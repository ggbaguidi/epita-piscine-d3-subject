#include "my_strcasecmp.h"

// Helper function to convert a character to lowercase
static char to_lower(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    }
    return c;
}

int my_strcasecmp(const char s1[], const char s2[]) {
    size_t i = 0;
    
    // Continue comparing characters until we find a difference or reach the end
    while (s1[i] != '\0' && s2[i] != '\0') {
        // Convert both characters to lowercase before comparing
        char c1 = to_lower(s1[i]);
        char c2 = to_lower(s2[i]);
        
        if (c1 != c2) {
            // Return the difference if characters differ
            return (unsigned char)c1 - (unsigned char)c2;
        }
        
        i++;
    }
    
    // If we've reached the end of one or both strings,
    // return the difference in length (like strcmp would)
    return (unsigned char)s1[i] - (unsigned char)s2[i];
}