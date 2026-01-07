#include <stdio.h>

int main()
{
    int arr[4] = {10, 20, 30, 40};
    int *ptr = arr;

    printf("Original array: ");
    for(int i = 0; i < 4; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");

    printf("Using ptr++:\n");
    printf("*ptr = %d, ", *ptr);
    ptr++;
    printf("*ptr = %d, ", *ptr);
    ptr++;
    printf("*ptr = %d\n", *ptr);

    ptr = arr;
    printf("Using ++ptr:\n");
    printf("*ptr = %d, ", *ptr);
    ++ptr;
    printf("*ptr = %d\n", *ptr);
    
    return 0;
}