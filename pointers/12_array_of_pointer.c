#include <stdio.h>

int main()
{
    int a = 10, b = 20, c = 30;
    int *ptr_array[3];

    ptr_array[0] = &a;
    ptr_array[1] = &b;
    ptr_array[2] = &c;

    printf("Values through pointer array:\n");
    for(int i = 0; i < 3; i++)
    {
        printf("ptr_array[%d] points to: %d\n", i, *ptr_array[i]);
    }

    *ptr_array[0] = 100;
    *ptr_array[1] = 200;
    *ptr_array[2] = 300;

    printf("After changes:\n");
    printf("a = %d, b = %d, c = %d\n",a, b, c);
    
    return 0;
}