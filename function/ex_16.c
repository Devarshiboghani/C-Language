#include <stdio.h>

int getSumOfRange(int);

int main()
{
    int val, sum;

    printf("Input the last number of the range from 1 to : ");
    scanf("%d", &val);

    sum = getSumOfRange(val);

    printf("The sum of numbers from 1 to %d : %d", val, sum);

    return 0;
}

int getSumOfRange(int n1)
{
    int res;

    if(n1 == 1)
        return 1;
    else
    res = n1 + getSumOfRange(n1 - 1);
        return res;
}