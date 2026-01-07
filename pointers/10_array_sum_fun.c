#include <stdio.h>

int calculateSum(int *arr, int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += *(arr + i); 
    }

    return sum;
}

int main()
{
    int numbers[] = {5, 10, 15, 20, 25};
    int size = 5;
    int total;

    printf("=== Sum of Array Elements ===\n");
    printf("Array elements: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    total = calculateSum(numbers, size);
    printf("Sum = %d\n", total);

    return 0;
}