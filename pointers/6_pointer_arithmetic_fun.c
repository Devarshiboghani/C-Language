#include <stdio.h>

void demonstratePointerArithmetic()
{
    int numbers[5] = {10, 20, 30, 40, 50};
    int *ptr = numbers; 

    printf("Array elements using pointer arithmetic:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Element %d: %d (Address: %p)\n", i, *(ptr + i), (ptr + i));
    }
}

int main()
{
    printf("=== Pointer Arithmetic Demo ===\n");
    demonstratePointerArithmetic();
    return 0;
}