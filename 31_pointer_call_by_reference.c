// This is an example of call by reference program in C.
#include <stdio.h>

void swap(int *x, int *y);

int main() 
{
    int a = 5, b = 10;
    printf("Before swapping a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swapping a = %d, b = %d\n", a, b);

    return 0;
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("Inside swap function a = %d, b = %d\n", *x, *y);
}