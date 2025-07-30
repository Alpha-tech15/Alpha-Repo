// Write a program in C to take two numbers from user and find their division.
#include <stdio.h>

int main() 
{
    float a, b;
    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    if (b == 0)
    {
        printf("The division of %f by %f is undifined.\n", a, b);
    }
    else
    {
        float division = a / b;
        printf("The division of %f by %f is: %f\n", a, b, division);
    }

    return 0;
}