// Write a program in C to print n number of fibonacci series.
#include <stdio.h>

int main()
{
    int n, a = 0, b = 1, c;
    printf("Enter the number: ");
    scanf("%d", &n);

    printf("The fibonacci series upto %d number is:\n", n);
    printf("%d\t%d", a, b);

    for (int i = 2; i < n; i++)
    {
        c = a + b;
        printf("\t%d", c);
        a = b;
        b = c;
    }

    return 0;
}