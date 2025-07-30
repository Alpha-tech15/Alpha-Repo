// Write a program in C to take two numbers from the user and find the difference between them.
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    int difference = a - b;
    printf("The difference between %d and %d is: %d\n", a, b, difference);

    return 0;
}