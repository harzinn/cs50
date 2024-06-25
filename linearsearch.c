#include <stdio.h>
#include <cs50.h>

int main(void) {
    int target = 25;

    int size = 15;
    int numbers[] = {11, 23, 8, 14, 30, 9, 6, 17, 22, 28, 25, 15, 7, 10, 19}; 

    for (int i = 0; i < size; i++) {
        if (target == numbers[i]) {
            printf("Target found\n");
            return 0;
        } 
    } 
    printf("Target not found\n");
    return 1;
}