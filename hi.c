#include <stdio.h>

int main(void)
{
    char name[100];

    printf("Enter your name: ");
    scanf("%4s", name);

    printf("Hello, %s!\n", name);
    printf("%p!\n", (void *)name);
}
