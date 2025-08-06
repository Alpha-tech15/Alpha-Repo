// Write a program in C to find the sum of n-natural number using the concept of recursion.
#include <stdio.h>

int recursion(int x); // function declaration

int main()
{
    int a;
    printf("Enter the number of natural number: ");
    scanf("%d", &a);

    int result = recursion(a); // function calling
    printf("The sum of %d natural number is %d.\n", a, result);

    return 0;
}

int recursion(int x) // function definition
{
    int a;
    if (x == 0)
    {
        return 0;
    }
    else
    {
        a = x + recursion(x - 1);
        return a;
    }
}