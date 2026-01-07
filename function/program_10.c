#include <stdio.h>

int sumOfNaturalNumbers(int val)
{
    int sum = 0;

    for(int i = 1; i <= val; i++)
    {
        sum = sum + i;
    }
    return sum;
}

int main()
{
    int val;

    printf("Enter a positive number : ");
    scanf("%d", &val);

    if(val > 0)
    {
        printf("The sum of first %d natural numbers is : %d\n", val, sumOfNaturalNumbers(val));
    }
    else
    {
        printf("Please enter a positive number.\n");
    }
    return 0;
}