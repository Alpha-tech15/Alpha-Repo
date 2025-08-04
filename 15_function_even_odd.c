// Write a program in C to check whether the input number is even or odd using a function.
#include <stdio.h>

void function(int x); // function declaration

int main() 
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);

    function(a);

    return 0;
}

void function(int x) // function definition
{
    if (x % 2 == 0)
    {
        printf("The number %d is even number.\n", x);
    }
    else
    {
        printf("The number %d is odd number.\n", x);
    }
}