#include <stdio.h>
#include <stdlib.h>

int fact(int n);

int main(int argc, char * argv[]) {
    if (argc != 2) {
        printf("Usage: ./sec_stack <value>\n");
        return 1;
    }
    
    printf("%i\n", fact(atoi(argv[1])));
    return 0;
}

int fact(int n) {
    // //Original
    // if (n == 1) {
    //     return 1;
    // }
    // else {
    //     return n* fact(n - 1);
    // }

    // Converted simple if else to ternary operator
    return (n == 1) ? 1 : n * fact(n - 1);
}
    
