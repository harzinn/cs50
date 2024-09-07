#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main(int argc, string argv[]) {
    // Check if the correct number of arguments is provided
    if (argc != 2) {
        printf("Usage: ./mario number\n");
        return 1;
    }

    // Convert input to integer
    int height = atoi(argv[1]);
    if (height <= 0) {
        printf("Please provide a positive integer for the height.\n");
        return 2;
    }

    // Print the height
    printf("Height is %i\n", height);
    
    return 0;  // Indicate successful execution
}
