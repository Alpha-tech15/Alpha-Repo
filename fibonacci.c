// Write a program in C to find the nth Fibonacci number using recursion.
#include <stdio.h>

int fibonacci(int n); // function declaration

int main()
{
    int a;
    printf("Enter the number of terms: ");
    scanf("%d", &a);
    printf("Fibonacci series up to %d terms: ", a);
    for (int i = 0; i < a; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}