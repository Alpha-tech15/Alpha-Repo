// Write a program in C to find the size of union.
#include <stdio.h>

union size
{
    int a;
    float b;
    double c;
};

int main()
{
    printf("The size of the union is %u bytes\n", sizeof(union size));
    return 0;
}