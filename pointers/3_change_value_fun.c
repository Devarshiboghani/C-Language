#include <stdio.h>

void changeValueByPointer()
{
    int original = 100;
    int *ptr = &original;

    printf("Before change: original = %d\n", original);

    *ptr = 500; 

    printf("After change: original = %d\n", original);
    printf("Value through pointer: %d\n", *ptr);
}

int main()
{
    printf("=== Changing Values Through Pointers ===\n");
    changeValueByPointer();
    return 0;
}