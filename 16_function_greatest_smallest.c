// Write a program in C to find the greatest and smallest number among three numbers by using function.
#include <stdio.h>

int greatest(int x, int y, int z); // function declaration
int smallest(int x, int y, int z); // function declaration

int main()
{
    int a, b, c;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);

    if (a == b && b == c)
    {
        printf("All three numbers are equall.\n");
    }
    else
    {
        int result1 = greatest(a, b, c); // function calling
        printf("%d is the greatest number.\n", result1);
        
        int result2 = smallest(a, b, c); // function calling
        printf("%d is the smallest number.\n", result2);
    }
    
    return 0;
}

int greatest(int x, int y, int z) // function definition
{
    if (x >= y && x >= z)
    {
        return x;
    }
    else if (y >= x && y >= z)
    {
        return y;
    }
    else
    {
        return z;
    }
}
int smallest(int x, int y, int z) // function definition
{
    if (x <= y && x <= z)
    {
        return x;
    }
    else if (y <= x && y <= z)
    {
        return y;
    }
    else
    {
        return z;
    }
}