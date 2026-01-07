#include <stdio.h>

int main()
{
    int i = 1, val = 0, sum = 0;
    float average;

    while(i <= 10)
    {
        printf("Enter value no %d = ",i);
        scanf("%d", &val);

        sum = sum + val;
        i++;

        average = sum/10;
    }
    printf("Average is %d\n", average);

    return 0;
}