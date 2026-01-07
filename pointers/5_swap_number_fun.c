#include <stdio.h>

void swapNumbers(int *a, int *b)
{
    int temp = *a; 
    *a = *b;       
    *b = temp;     
}

int main()
{
    int first = 25;
    int second = 75;

    printf("=== Swapping Numbers Using Pointers ===\n");
    printf("Before swap: first = %d, second = %d\n", first, second);

    swapNumbers(&first, &second); 

    printf("After swap: first = %d, second = %d\n", first, second);

    return 0;
}