// Write a program in C to create a datafile "patient.txt" and store name, disease, age and bed number of a patient.
#include <stdio.h>

int main()
{
    int age, bed_no;
    char name[20], disease[20];
    FILE *fptr;
    fptr = fopen("patient.txt", "w");

    printf("Enter the name of the patient: ");
    scanf("%s", name);

    printf("Enter the disease of the patient: ");
    scanf("%s", disease);

    printf("Enter the age of the patient: ");
    scanf("%d", &age);

    printf("Enter the bed number of the patient: ");
    scanf("%d", &bed_no);

    fprintf(fptr, "Name: %s\nDisease: %s\nAge: %d\nBed number: %d\n", name, disease, age, bed_no);
    fclose(fptr);

    return 0;
}