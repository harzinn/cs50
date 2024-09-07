#include <stdio.h>
#include <stdint.h>

typedef uint8_t BYTE;

int main (int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage ./pdf <filename>");
        return 1;
    }
    // TODO: Check first four bytes in a given file
    char *filename = argv[1];
    FILE *f = fopen(filename, "r");
    const int size = 4;
    BYTE buffer[size];
    fread(buffer, 1, size, f);

    for (int i = 0; i < size; i++) {
        printf("%i\n", buffer[i]);
    }
    fclose(f);
    return 0;
}