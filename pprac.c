#include <stdio.h>

void addfunc(int *x);

int main(void){
    int x = 5;
    int *px = &x;
    
    printf("%d\n", x);

    for (int i = 0; i < 10; i++) {
        addfunc(px);
        printf("%d\n", x);
    }
}

void addfunc(int *x) {
    *x = *x + 1;
}