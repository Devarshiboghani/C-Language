#include <stdio.h>

int main()
{
    int arr[3] = {10, 20, 30};
    int *ptr;

    ptr = arr;

    printf("Array elements:\n");
    printf("arr[0] = %d\n", arr[0]);
    printf("arr[1] = %d\n", arr[1]);
    printf("arr[2] = %d\n", arr[2]);

    printf("Using pointers:\n");
    printf("ptr = %d\n", *ptr);
    printf("*(ptr+1) = %d\n", *(ptr+1));
    printf("*(ptr+2) = %d\n", *(ptr+2));

    return 0;
}