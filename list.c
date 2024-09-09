#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *list = malloc(3 * sizeof(int));
    if (list == NULL) {
        fprintf(stderr, "Failed to allocate memmory");
        return 1;
    }

    int size = 4;
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    int *tmp = malloc(4 * sizeof(int));
    if (tmp == NULL) {
        free(list);
        fprintf(stderr, "Failed to allocate memmory");
        return 1;        
    }

    for (int i = 0; i < size; i++) {
        tmp[i] = list[i];
    }

    tmp[3] = 4;
    free(list);
    list = tmp;

    for (int i = 0; i < size; i++) {
        printf("%i at memory location %p\n", list[i], &list[i]);
    }

    free(list);
    return 0;
}
