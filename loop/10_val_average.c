//  Write a program to accept 10 values and print its average.

#include <stdio.h>

int main()
{
    int i = 1;
    float sum = 0, val, average;

    for(i = 1; i <= 10; i++)
    {
        printf("Enter value no %d = ",i);
        scanf("%f", &val);

        sum = sum + val;

        average = sum/10;
    }
    printf("Average is %.2f\n", average);

    return 0;
}