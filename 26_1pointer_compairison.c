// Write a program in C to compare two number using the pointers.
#include <stdio.h>

int main()
{
    int data[2], *ptr1, *ptr2;
    printf("Enter first number: ");
    scanf("%d", &data[0]);
    printf("Enter second number: ");
    scanf("%d", &data[1]);

    ptr1 = &data[0];
    ptr2 = &data[1];

    if (*ptr1 > *ptr2)
    {
        printf("First number is greater than second number.\n");
    }
    else if (*ptr1 < *ptr2)
    {
        printf("Second number is greater than first number.\n");
    }
    else
    {
        printf("First number and second number are equal.\n");
    }

    return 0;
}