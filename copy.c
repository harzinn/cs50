#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage ./test <input> <output>\n");
        return 1;
    }
    FILE *input = fopen(argv[1], "r");
    if (input == NULL) {
        printf("Could not open file\n");
        return 2;
    }

    FILE *output = fopen(argv[2], "w");
    if (output == NULL) {
        printf("Could not write file\n");
        return 3;
    }

    // Define buffer with the size of BYTE (uint8_t)
    BYTE buffer;

    // Copy input file into buffer
    while (fread(&buffer, sizeof(BYTE), 1, input)) {

        // Print the buffer
        printf("%c", buffer);

        // Copy byte by byte to output file
        fwrite(&buffer, sizeof(BYTE), 1, output);
    }
    
    // Close files
    fclose(input);
    fclose(output);

    return 0;
}