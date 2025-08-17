
#include <stdio.h>

int main()
{
    int data[2] = {10, 20};
    int *ptr = data;
    printf("Initial value of pointer: %d\n", *ptr);
    ptr++;
    printf("Increment value of pointer: %d\n", *ptr);
    ptr--;
    printf("Decrement value of pointer: %d\n", *ptr);

    return 0;
}