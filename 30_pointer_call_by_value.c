// This is an example of call by value program in C.
#include <stdio.h>

void swap(int x, int y);

int main() 
{
    int a = 5, b = 10;
    printf("Before swapping a = %d, b = %d\n", a, b);
    swap(a, b);
    printf("After swapping a = %d, b = %d\n", a, b);

    return 0;
}

void swap(int x, int y) 
// Note: This swap does not affect the original variables a and b in main function.
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("Inside swap function a = %d, b = %d\n", x, y);
}