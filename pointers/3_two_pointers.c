#include <stdio.h>

int main()
{
    int a = 10;
    int *ptr1, *ptr2;

    ptr1 = &a;
    ptr2 = &a;

    printf("a = %d\n", a);
    printf("*ptr1 = %d\n", *ptr1);
    printf("*ptr2 = %d\n", *ptr2);

    *ptr1 = 20;

    printf("After changing through ptr1:\n");
    printf("a = %d\n", a);
    printf("*ptr1 = %d\n", *ptr1);
    printf("*ptr2 = %d\n", *ptr2);

    return 0;
}