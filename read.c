#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void) {
    FILE *file = fopen("phonebook.csv", "r");
    if (file == NULL) {
        return 1;
    }

  char buffer[1024]; // Buffer to store each line

    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }

    fclose(file);
}
