// Write a program to input number from the user and find the reverse of that number.
#include <stdio.h>

int main()
{
    int num, remainder, reverse = 0;
    printf("Enter the number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10; // Remove the last digit from num.
    }
    
    printf("The reversed number is: %d.\n", reverse);
    return 0;
}