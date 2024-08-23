#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// Function to get a string input from the user
char *get_string(const char *prompt)
{
    // If a prompt is provided, print it
    if (prompt != NULL)
    {
        printf("%s", prompt);
    }

    // Initialize the buffer and other variables
    char *buffer = NULL;
    size_t capacity = 0;
    size_t length = 0;

    // Read characters from the user one at a time
    int c;
    while ((c = fgetc(stdin)) != '\n' && c != EOF)
    {
        // Ensure there's room for the next character
        if (length + 1 >= capacity)
        {
            // Double the buffer's capacity (or start at 32 bytes)
            capacity = capacity > 0 ? capacity * 2 : 32;

            // Attempt to resize the buffer
            char *temp = realloc(buffer, capacity);
            if (temp == NULL)
            {
                free(buffer);
                return NULL;
            }
            buffer = temp;
        }

        // Store the character in the buffer
        buffer[length++] = (char) c;
    }

    // Null-terminate the string
    buffer[length] = '\0';

    // Return the dynamically allocated string
    return buffer;
}