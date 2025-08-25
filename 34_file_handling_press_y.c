/*  Write a program in C to create a datafile "student.txt" contain name, age and marks obtained in 3 different subjects 
    of few students and add feature press 'Y' to continue until user wants to add more students.
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char name[20], choice[3];
    int class, marks[3];

    FILE *fptr;
    fptr = fopen("student.txt", "w");
    do
    {
        printf("Enter the name of the student: ");
        scanf("%s", name);

        printf("Enter the class of the student: ");
        scanf("%d", &class);

        for (int i = 0; i < 3; i++)
        {
            printf("Enter the marks of subject%d: ", i + 1);
            scanf("%d", &marks[i]);
        }

        fprintf(fptr, "Name: %s\nClass: %d\n", name, class);
        fprintf(fptr, "Marks in first subject: %d\nMarks in second subject: %d\nMarks in third subject: %d\n", marks[0], marks[1], marks[2]);

        printf("Press Y to continue: ");
        scanf("%s", choice);

    } while ((strcmp(choice, "Y") == 0) || (strcmp(choice, "y") == 0));
    fclose(fptr);

    return 0;
}