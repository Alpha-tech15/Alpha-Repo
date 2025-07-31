// This is an example of do-while loop in C.
#include <stdio.h>

int main() 
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a); // Take an integer input from the user.

    int i = 0; // Initialize the loop counter.
    do // Start of the do-while loop.
    {
        printf("Hello World\n");
        i++; // Increment the loop counter.
    } while (i < a); // Condition checking for the do-while loop.

    return 0;
}