// Write a program in C to store id, name and post of n number of employee in the file "employee.txt" and
// display the details using the concept of structure. Also arrange in ascending order on the basis of name.
#include <stdio.h>
#include <string.h>

struct employee
{
    int id;
    char name[20], post[20];
};

int main()
{
    int n;
    printf("Enter the number of employee: ");
    scanf("%d", &n);
    struct employee p[n], temp;

    FILE *fptr;
    fptr = fopen("employee.txt", "w");

    for (int i = 0; i < n; i++)
    {
        printf("Enter the ID of the employee%d: ", i + 1);
        scanf("%d", &p[i].id);
        printf("Enter the name of the employee%d: ", i + 1);
        scanf("%s", p[i].name);
        printf("Enter the post of the employee%d: ", i + 1);
        scanf("%s", p[i].post);
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

    for (int i = 0; i < n; i++)
    {
        fprintf(fptr, "%d %s %s\n", p[i].id, p[i].name, p[i].post);
    }
    fclose(fptr);

    fptr = fopen("employee.txt", "r");
    while (fscanf(fptr, "%d %s %s\n", &temp.id, temp.name, temp.post) != EOF)
    {
        printf("ID: %d\nName: %s\nPost: %s\n", temp.id, temp.name, temp.post);
    }
    fclose(fptr);

    return 0;
}