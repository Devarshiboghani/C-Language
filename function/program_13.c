#include <stdio.h>

int findLCM(int a, int b)
{
    int max = (a > b) ? a : b;

    while(1)
    {
        if(max % a == 0 && max % b == 0)
        {
            return max;
        }
        max++;
    }
}

int main()
{
    int num1, num2, lcm;

    printf("Enter two number : ");
    scanf("%d %d", &num1, &num2);

    lcm = findLCM(num1, num2);

    printf("LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}