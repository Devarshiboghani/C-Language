#include <stdio.h>

int main()
{
    int num = 10;
    int *ptr;

    ptr = &num;


    printf("Value of number = %d\n", num);
    printf("Address of number = %p\n", &num);
    printf("Value store in ptr = %p\n", ptr);
    printf("Value pointed by ptr = %d\n", *ptr);

    return 0;
}