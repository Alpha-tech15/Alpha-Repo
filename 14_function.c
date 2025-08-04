// This is an example of function in C.
#include <stdio.h>

void hello(/* Place for formal parameter*/); // function declaration or prototype

int main()
{
    hello(/* Place for actual parameter*/); // function calling

    return 0;
}

void hello(/* Place for formal parameter*/) // function definition
{
    printf("Hello, World!\n"); // function body
}