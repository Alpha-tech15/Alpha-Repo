
#include <stdio.h>

int main()
{
    int num = 50;
    int *ptr;
    ptr = &num;
    printf("Initial address of ptr: %u.\n", ptr);
    ptr = ptr + 3;
    printf("Addition address of ptr: %u.\n", ptr);
    ptr = ptr - 3;
    printf("Subtraction address of ptr: %u.\n", ptr);

    return 0;
}