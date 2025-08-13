// Write a program in C to demonstrate the use of pointer.
#include <stdio.h>

int main()
{
    int var = 3, *ptr;

    ptr = &var;
    printf("Value of var is %d.\n", var);
    printf("Address of var is %p.\n", &var);
    printf("Address of var is %p.\n", ptr);
    printf("Value of var is %d.\n", *ptr);
    /*
        We can also use %d in place of %p to get memory address but
        %p gives hexadecimal value whereas %d gives decimal value.
    */

    return 0;
}