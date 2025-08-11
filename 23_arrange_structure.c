// Write a program in C to arrange in ascending order on the basis of name and display the name, age and address of n number of students by using the concept of structure.
#include <stdio.h>
#include <string.h>

struct student // structure definition
{
    char name[20], address[20];
    int age;
};

int main() 
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student p[n], temp; // Structure variable definition using array of structure
    for (int i = 0; i < n; i++)
    {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", p[i].name);
        printf("Enter the age of student %d: ", i + 1);
        scanf("%d", &p[i].age);
        printf("Enter the address of student %d: ", i + 1);
        scanf("%s", p[i].address);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (strcmp(p[j].name, p[j + 1].name) > 0)
            {
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }

    printf("The details of the students arranged in ascending order are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("The name of student %d is %s. ", i + 1, p[i].name);
        printf("His age is %d and ", p[i].age);
        printf("his address is %s.\n", p[i].address);
    }

    return 0;
}