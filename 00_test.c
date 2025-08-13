// This is just a test file
#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40};
    int *p = arr; // points to arr[0]

    p = p + 2;          // now points to arr[2]
    printf("%d\n", *p); // 30

    p = p - 1;          // now points to arr[1]
    printf("%d\n", *p); // 20

    int diff = &arr[3] - &arr[0]; // difference in elements
    printf("%d\n", diff);         // 3

    return 0;
}
