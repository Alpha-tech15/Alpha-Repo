// Write a program in C to compare two number using the pointers.
#include <stdio.h>

int main()
{
    int data[2], *ptr[2];
    for (int i = 0; i < 2; i++)
    {
        printf("Enter two numbers: ");
        scanf("%d", &data[i]);
        ptr[i] = &data[i];
    }

    if (*ptr[0] > *ptr[1])
    {
        printf("First number is greater than second number.\n");
    }
    else if (*ptr[0] < *ptr[1])
    {
        printf("Second number is greater than first number.\n");
    }
    else
    {
        printf("First number and second number are equal.\n");
    }

    return 0;
}