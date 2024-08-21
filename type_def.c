#include <stdio.h>

void print_pointer(int * location);
void change_value(int * pointer);
typedef char * string;

int main(void) {
    int x = 7;
    int y = 9;

    printf("%d\n", x);
    change_value(&x);
    printf("%d\n", x);
    print_pointer(&x);
    print_pointer(&x);
    print_pointer(&y);


}

void print_pointer(int * location) {
    printf("%p\n", location);
}

void change_value(int * pointer) {
    *pointer = *pointer + 1;
}