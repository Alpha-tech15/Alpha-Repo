// Write a program in C to find the factorial of a number by using pointer.
#include <stdio.h>

int main()
{
    int n, factorial = 1;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &n);

    int *ptr = &n;
    for (int i = 0; i < *ptr; i++)
    {
        factorial = factorial * (i + 1);
    }
    
    printf("The factorial of %d is %d\n", *ptr, factorial);
    return 0;
}