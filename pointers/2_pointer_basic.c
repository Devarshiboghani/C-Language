#include <stdio.h>

int main()
{
    int a = 10;
    int *p;

    p = &a;

    printf("Before change:\n");
    printf("a = %d\n", a);
    printf("*p = %d\n", *p);

    *p = 20;

    printf("After change through pointer:\n");
    printf("a = %d\n", a);
    printf("*p = %d\n", *p);
    
    return 0;
}