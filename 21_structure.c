// Write a program in C to display the name, age and salary of a person by using the concept of structure.
#include <stdio.h>

struct Person // Structure definition
{
    char name[20];
    int age;
    float salary;
};

int main()
{
    struct Person p; // Structure variable definition
    printf("Enter the name of the person: ");
    scanf("%s", p.name);

    printf("Enter the age of the person: ");
    scanf("%d", &p.age);

    printf("Enter the salary of the person: ");
    scanf("%f", &p.salary);

    printf("The name of the person is %s. ", p.name);
    printf("His age is %d and ", p.age);
    printf("his salary is %.3f.\n", p.salary);

    return 0;
}