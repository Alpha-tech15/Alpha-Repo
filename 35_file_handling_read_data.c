// A datafile "student.txt" contains name, age and class of few students.
// Write a program in C to read and display all those details.
#include <stdio.h>

int main()
{
    int age, class;
    char name[20];

    FILE *fptr;
    fptr = fopen("student.txt", "r");
    if (fptr == NULL)
    {
        printf("File not found.\n");
    }
    else
    {
        while (fscanf(fptr, "%s %d %d\n", name, &age, &class) != EOF)
        {
            printf("Name: %s\nAge: %d\nClass: %d\n", name, age, class);
        }
        fclose(fptr);
    }

    return 0;
}