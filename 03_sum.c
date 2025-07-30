// Write a program in C to take two numbes from the user and print their sum.
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    int sum = a + b;
    printf("The sum of %d and %d is: %d\n", a, b, sum);

    return 0;
}