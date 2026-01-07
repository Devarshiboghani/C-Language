#include <stdio.h>

void showAddresses()
{
    int a = 10;
    int b = 20;
    int *ptr_a = &a; 
    int *ptr_b = &b; 

    printf("Variable a = %d, Address = %d\n", a, &a);
    printf("Variable b = %d, Address = %d\n", b, &b);
    printf("Pointer ptr_a points to addrrss: %d\n", ptr_a);
    printf("Pointer ptr_b points to address: %d\n", ptr_b);
}

int main()
{
    printf("=== Pointer and Address Demo ===\n");
    showAddresses();
    return 0;
}