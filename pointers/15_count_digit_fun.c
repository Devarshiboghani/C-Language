#include <stdio.h>

void countDigits(int *number, int *count)
{
    int temp = *number;
    *count = 0;

    if (temp == 0)
    {
        *count = 1;
        return;
    }

    if (temp < 0)
    {
        temp = -temp;
    }

    while (temp > 0)
    {
        temp = temp / 10;
        (*count)++;
    }
}

int main()

{
    int number = 12345;
    int digitCount = 0;

    printf("=== Count Digits Using Pointers ===\n");
    printf("Number: %d\n", number);

    countDigits(&number, &digitCount);

    printf("Number of digits: %d\n", digitCount);

    return 0;
}