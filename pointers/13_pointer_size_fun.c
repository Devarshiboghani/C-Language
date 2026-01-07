#include <stdio.h>

void showPointerSizes()
{
    int *int_ptr;
    char *char_ptr;
    float *float_ptr;
    double *double_ptr;

    printf("Size of different pointer types:\n");
    printf("int pointer size: %zu bytes\n", sizeof(int_ptr));
    printf("char pointer size: %zu bytes\n", sizeof(char_ptr));
    printf("float pointer size: %zu bytes\n", sizeof(float_ptr));
    printf("double pointer size: %zu bytes\n", sizeof(double_ptr));

    printf("\nSize of data types they point to:\n");
    printf("int size: %zu bytes\n", sizeof(int));
    printf("char size: %zu bytes\n", sizeof(char));
    printf("float size: %zu bytes\n", sizeof(float));
    printf("double size: %zu bytes\n", sizeof(double));
}

int main()
{
    printf("=== Pointer Size Information ===\n");
    showPointerSizes();
    return 0;
}