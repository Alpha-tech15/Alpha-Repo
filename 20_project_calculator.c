// This is a basic calculator made in C language using the concepts of data types, variables,conditional statements, loops, and functions.
// This calculator can perform addition, subtraction, multiplication, and division between two numbers.
// Author: Arun Chand

#include <stdio.h>

// Function declarations
void option(int choice);
void add(double num1, double num2);
void subtract(double num1, double num2);
void multiply(double num1, double num2);
void divide(double num1, double num2);

int main()
{
    printf("Welcome guys this is basic calculator made by Arun Chand\n");
    printf("This calculator could do following operations between two numbers.\n");
    while (1)
    {
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        int choice;
        printf("Choose an operation: ");
        scanf("%d", &choice); // Taking input from user

        if (choice >= 1 && choice <= 4) // Checking the user input is between 1 and 4 or not.
        {
            option(choice); // function calling

            double num1, num2;
            printf("Enter first number: ");
            scanf("%lf", &num1); // Taking first number from user

            printf("Enter second number: ");
            scanf("%lf", &num2); // Taking second number from user

            if (choice == 1) // Checking if the user input number is 1 or not.
            {
                add(num1, num2); // function calling
            }
            else if (choice == 2) // Checking if the user input number is 2 or not.
            {
                subtract(num1, num2); // function calling
            }
            else if (choice == 3) // Checking if the user input number is 3 or not.
            {
                multiply(num1, num2); // function calling
            }
            else if (choice == 4) // Checking if the user input number is 4 or not.
            {
                divide(num1, num2); // function calling
            }
        }
        else if (choice == 5) // Checking if the user input number is 5 or not.
        {
            printf("Exiting the calculator. Goodbye!!!!\n");
            break; // Exiting the loop
        }
        else
        {
            printf("Invalid option.\n"); // If the user input number is not between 1 and 5.
            printf("Please enter number between 1 and 5.\n");
        }
    }
    return 0;
}

// function definitions
void option(int choice)
{
    switch (choice)
    {
    case 1:
        printf("You have chosen to do addition between two numbers.\n");
        break;
    case 2:
        printf("You have chosen to do subtraction between two numbers.\n");
        break;
    case 3:
        printf("You have chosen to do multiplication between two numbers.\n");
        break;
    case 4:
        printf("You have chosen to do division between two numbers.\n");
        break;
    }
}

void add(double num1, double num2)
{
    double sum;
    sum = num1 + num2;
    printf("The sum of %lf and %lf is %lf.\n", num1, num2, sum);
}

void subtract(double num1, double num2)
{
    double difference;
    difference = num1 - num2;
    printf("The difference of %lf and %lf is %lf.\n", num1, num2, difference);
}

void multiply(double num1, double num2)
{
    double product;
    product = num1 * num2;
    printf("The product of %lf and %lf is %lf.\n", num1, num2, product);
}

void divide(double num1, double num2)
{
    double quotient;
    if (num2 != 0)
    {
        quotient = num1 / num2;
        printf("The division of %lf and %lf is %lf.\n", num1, num2, quotient);
    }
    else
    {
        printf("The division of %lf and %lf is undefined.\n", num1, num2);
    }
}
