#include <stdio.h>

int main()
{
    int value = 10;
    int *ptr;
    int **ptr_to_ptr;

    ptr = &value;
    ptr_to_ptr = &ptr;

    printf("value = %d\n", value);
    printf("*ptr = %d\n", *ptr);
    printf("**ptr_to_ptr = %d\n", **ptr_to_ptr);

    **ptr_to_ptr = 100;

    printf("After change;\n");
    printf("value = %d\n", value);
    
    return 0;
}