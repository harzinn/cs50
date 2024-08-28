#include <stdio.h>

/*
 * Program: cat
 * Description:
 *   Simple File Reader
 *   This program mimics the functionality of the Unix 'cat' command, 
 *   which reads and displays the contents of a file passed as a 
 *   command-line argument.
 *
 * Usage:
 *   ./program_name <filename>
 *
 *   The program expects exactly one argument, which is the name of the 
 *   file to be read. If the argument is not provided, or if the file 
 *   cannot be opened, the program will print an appropriate error message 
 *   and exit with a non-zero status code.
 */

int main(int argc, char *argv[]) {
    
    // Check if exactly one argument (the filename) is provided.
    if (argc != 2) {
        // Print usage instructions to stderr if the argument count is incorrect.
        fprintf(stderr, "Usage: cat <filename>\n");
        // Return 1 to indicate an error due to incorrect usage.
        return 1;
    }
    
    // Attempt to open the file in read mode.
    FILE *ptr1 = fopen(argv[1], "r");
    // Check if the file was successfully opened.
    if (ptr1 == NULL) {
        // Print an error message to stderr if the file cannot be opened.
        fprintf(stderr, "File could not be opened\n");
        // Return 2 to indicate a file opening error.
        return 2;
    }
    
    // Declare a variable to store each character read from the file.
    char ch;
    // Read the file character by character until the end of the file (EOF) is reached.
    while ((ch = fgetc(ptr1)) != EOF) {
        // Print each character to the standard output (stdout).
        printf("%c", ch);
    }
    
    // Print a newline character at the end for clean output formatting.
    printf("\n");
    
    // Close the file after reading is complete to free resources.
    fclose(ptr1);
    
    // Return 0 to indicate successful execution.
    return 0;
}