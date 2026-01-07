#include <stdio.h>

int main()
{
    int numbers[4] = {10, 20, 30, 40};
    int *ptr;

    ptr = numbers;
    
    printf("Using pointer arithmetic:\n");

    printf("Element 0: %d\n", *ptr);
    printf("Element 1 :%d\n", *(ptr + 1));
    printf("Element 2: %d\n", *(ptr + 2));
    printf("Element 3: %d\n", *(ptr + 3));

    return 0;
}