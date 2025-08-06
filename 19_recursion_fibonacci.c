// Write a program in C to print the fibonacci series up to nth term using the concept of recursion.
#include <stdio.h>

int fibonacci(int x); // function declaration

int main()
{
    int a;
    printf("Enter nmber of fibonacci series: ");
    scanf("%d", &a);

    printf("The fibonacci series upto %d term is:\n", a);
    for (int i = 0; i < a; i++)
    {
        printf("%d\t", fibonacci(i)); // function calling
    }

    return 0;
}

int fibonacci(int x) // function definition
{
    if (x == 0)
    {
        return 0;
    }
    else if (x == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(x - 1) + fibonacci(x - 2);
    }
}