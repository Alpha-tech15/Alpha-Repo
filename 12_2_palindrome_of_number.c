// Write a program in C to take number from user and check whether it is palindrome or not.
#include <stdio.h>

int main()
{
    int num, original, remainder, reverse = 0;
    printf("Enter the number: ");
    scanf("%d", &num);

    original = num;
    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }

    if (original == reverse)
    {
        printf("The number %d is palindrome and the reversed number is %d.\n", original, reverse);
    }
    else
    {
        printf("The number %d is not palindrome and the reversed number is %d.\n", original, reverse);
    }

    return 0;
}