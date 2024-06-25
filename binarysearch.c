#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main(int argc, string argv[]) {
    if (argc != 2) {
        printf("Usage: %s target\n", argv[0]);
        return 1;
    }
    int target = atoi(argv[1]);

    // Array setup
    int size = 1000000;
    int numbers[size];
    for (int i = 0; i < size; i++) {
        numbers[i] = i;
    }
    
    // Start of binary search setup
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) /2;

        // Check if the target is present at mid
        if (numbers[mid] == target) {
            printf("Target found at position %i\n", mid);
            return 0;
        }
        // If target is greater, ignore the left half
        if (numbers[mid] < target) {
            left = mid + 1;
        }
        // If target is smaller, ignore the right half
        else {
            right = mid - 1;
        }
    }
    printf ("Target not found\n");
    return 2;
}