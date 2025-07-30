// Write a program in C to take two numbers from user and find their product(multiplication).
#include <stdio.h>

int main() 
{
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    int product = a * b;
    printf("The product of %d and %d is: %d\n", a, b, product);

    return 0;
}