// Write a program in C to find the product(or factorial) of n-natural number using the concept of recursion.

#include <stdio.h>

int recursion(int x); // function declaration

int main()
{
    int a;
    printf("Enter the number of natural number: ");
    scanf("%d", &a);

    int result = recursion(a); // function calling
    printf("The product of %d natural number is %d.\n", a, result);

    return 0;
}

int recursion(int x) // function definition
{
    int a;
    if (x == 1)
    {
        return 1;
    }
    else
    {
        a = x * recursion(x - 1);
        return a;
    }
}