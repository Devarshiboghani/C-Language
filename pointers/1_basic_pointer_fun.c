#include <stdio.h>

void demonstrateBasicPointer()
{
    int number = 42; 
    int *ptr;

    ptr = &number; 

    printf("Value of number: %d\n", number);
    printf("Address of number: %p\n", &number);
    printf("Value stored in ptr: %p\n", ptr);
    printf("Value pointed by ptr: %d\n", *ptr); 
}

int main()
{
    printf("=== Basic Pointer Demo ===\n");
    demonstrateBasicPointer();
    return 0;
}