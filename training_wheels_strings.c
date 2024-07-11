#include <stdio.h>
// Removing cs50.h training wheels for strings!!!
// #include <cs50.h>

// What training wheels were actually doing
// typedef char *string;

int main(void) {
    // Training wheels way
    // string s = "HI!";
    // printf("%s\n", s);  
 
    // Pointer arithmetic to get values of the "string" s, or the array of chars
    char *s = "HI!";
    printf("%c", *s);
    printf("%c", *(s + 1));
    printf("%c\n", *(s + 2));  // Note: *s+2 without brackets led to anomolyous results

    // Same as above, but with array indexing!
    printf("%c", s[0]);
    printf("%c", s[1]);
    printf("%c\n", s[2]);
}