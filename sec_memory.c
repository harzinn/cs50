#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *f = fopen("hi.txt", "r");
    char *buffer = NULL;
    fread(buffer, 1, 4, f);
    // fread (WHERE TO, SIZE OF DATA, HOW MANY BLOCKS OF DATA, WHERE FROM)
    
    fclose(f);
    return 0;
}