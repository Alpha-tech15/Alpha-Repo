// Write a program in C to create a datafile "student.txt" and store name, age and class of n number of students.
#include <stdio.h>

int main()
{
    int age, class, n;
    char name[20];
    printf("Enter number of students: ");
    scanf("%d", &n);

    FILE *fptr;
    fptr = fopen("student.txt", "a");

    for (int i = 0; i < n; i++)
    {

        printf("Enter the name of the student %d: ", i + 1);
        scanf("%s", name);

        printf("Enter the age of the student %d: ", i + 1);
        scanf("%d", &age);

        printf("Enter the class of the student %d: ", i + 1);
        scanf("%d", &class);

        fprintf(fptr, "The details of %d student is\n", i + 1);
        fprintf(fptr, "Name: %s\nAge: %d\nClass: %d\n", name, age, class);
    }
    fclose(fptr);

    return 0;
}