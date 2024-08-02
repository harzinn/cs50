#include <stdio.h>

// Function prototype for testfun, which takes a pointer to an int
void testfun(int *y);

// Function prototype for testfun2, which takes an int and returns an int
int testfun2(int y);

int main(void) 
{
    // Declare an integer variable x and initialize it to 5
    int x = 5;
    
    // Declare a pointer to an int and initialize it to NULL
    int *px = NULL;
    
    // Assign the address of x to the pointer px
    px = &x;
    
    // Print the initial value of x
    printf("%d\n", x); // Output: 5
    
    // Call testfun and pass the pointer px (address of x)
    testfun(px);
    
    // Print the value of x after calling testfun
    printf("%d\n", x); // Output: 6 (x modified by testfun)
    
    // Call testfun2 with x and store the returned value in z
    int z = testfun2(x);
    
    // Print the value of z after calling testfun2
    printf("%d\n", z); // Output: 7 (x unchanged, z is new value)
    
    return 0;
}

// Definition of testfun, which takes a pointer to an int and modifies the value it points to
void testfun(int *y) 
{
    // Dereference the pointer and increment the value it points to by 1
    *y = *y + 1;
}

// Definition of testfun2, which takes an int, modifies it, and returns the new value
int testfun2(int y) 
{
    // Increment the value of y by 1
    y = y + 1;
    
    // Return the modified value
    return y;
}