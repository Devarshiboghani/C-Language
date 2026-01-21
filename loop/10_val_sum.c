// Write a program to accept 10 values and print its sum.

#include <stdio.h>

int main()
{
    int i = 1, val = 0, sum = 0;

    while(i <= 10)
    {

         printf("Enter value no %d = ", i);
         scanf("%d", &val);

        sum = sum + val;
        i++;
    }
    printf("Sum of 10 values is %d\n",sum);

    return 0;
}