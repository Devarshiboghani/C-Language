#include <stdio.h>

int factorial(int num)
{
    int fact = 1;

    for(int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

int isStrongNumber(int num)
{
   int sum = 0, val = num, digit;

   while(val > 0)
   {
        digit = val % 10;
        sum += factorial(digit);
        val /= 10;
   }
   return sum == num;
}

int main()
{
    printf("Strong number between 1 to 100 are : \n");
    for( int i = 1; i <= 100; i++)
    {
        if(isStrongNumber(i))
        {
           printf("%d\n", i);
        }
    }
    return 0;
}