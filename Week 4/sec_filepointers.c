#include <stdio.h>

int main(void) {
    //code here
    return 0;
}



// Notes

// fopen(), fclose(), fgetc(), fputc(), fread(); fwrite()

// fopen()
//  Opens a file into a pointer
//  FILE* ptr = fopen(<filename>, <operation>);  Check for NULL value first
//  FILE* ptr1 = fopen("file1.txt", "r"); Read // FILE* ptr2 = fopen("file1.txt", "w"); Write
//  FILE* ptr1 = fopen("file1.txt", "a"); Append

// fclose()
//  Close a file pointer
//  fclose(<file pointer>);
//  fclose(ptr1);

// fgetc()
//  Reads and returns the next character from the file pointed to
//  Must be opened as read
//  char ch = fgetc(<file pointer>);
//  char ch = fetgc(ptr1);  Gets the next character in ptr1

// Putting it all together to read from a file pointer
//  char ch;
//  while ((ch = fgetc(ptr)) != EOF) {
//      printf("c", ch);
//  }
