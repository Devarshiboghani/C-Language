#include <stdio.h>

void arrayPointerRelation()
{
    int arr[4] = {1, 2, 3, 4};
    int *ptr = arr; 

    printf("Accessing array elements:\n");
    printf("Using array notation: arr[0] = %d\n", arr[0]);
    printf("Using pointer notation: *ptr = %d\n", *ptr);
    printf("Using pointer notation: *(ptr+1) = %d\n", *(ptr + 1));

    printf("\nArray name and pointer comparison:\n");
    printf("arr = %p\n", arr);
    printf("ptr = %p\n", ptr);
    printf("&arr[0] = %p\n", &arr[0]);
}

int main()
{
    printf("=== Array and Pointer Relationship ===\n");
    arrayPointerRelation();
    return 0;
}