// This is an example of for loop in C.
#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a); // Take an integer input from the user.

    for (int i = 0; i < a; i++) // here i = 0 is the initialization, i < a is the condition, and i++ is the increment.
    {
        printf("Hello world\n");
    }

    return 0;
}