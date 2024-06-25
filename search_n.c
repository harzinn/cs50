#include <stdio.h>
#include <cs50.h>

int main(void) {
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};
    int size = 7;

    int n = get_int("Number: ");

    for (int i = 0; i < size; i++) {
        if (numbers[i] == n) {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}