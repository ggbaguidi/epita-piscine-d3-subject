#include "my_strncasecmp.h"

// Helper function to convert a character to lowercase
static char to_lower(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    }
    return c;
}

int my_strncasecmp(const char s1[], const char s2[], size_t n) {
    // If n is 0, strings are considered equal according to strncasecmp spec
    if (n == 0)
        return 0;
        
    size_t i = 0;
    
    // Compare characters until we find a difference, reach the end of a string, or reach n characters
    while (i < n - 1 && s1[i] != '\0' && s2[i] != '\0') {
        // Convert both characters to lowercase before comparing
        char c1 = to_lower(s1[i]);
        char c2 = to_lower(s2[i]);
        
        if (c1 != c2) {
            // Return the difference if characters differ
            return (unsigned char)c1 - (unsigned char)c2;
        }
        
        i++;
    }
    
    // Compare the nth character or the first null terminator encountered
    return (unsigned char)to_lower(s1[i]) - (unsigned char)to_lower(s2[i]);
}