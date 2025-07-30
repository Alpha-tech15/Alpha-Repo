// Write a program in C to take the input from user and find it's factorial.
#include <stdio.h>

int main() 
{
    int n, a = 1;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        a = a * i;
    }

    printf("The factorial of %d (%d!) is: %d\n", n, n, a);

    return 0;
}