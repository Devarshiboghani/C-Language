#include <stdio.h>

int findHCF(int a, int b)
{

    while(b != 0)
    {
        int val = b;
        b = a % b;
        a = val;
    }
    return a;
}

int main()
{
    int num1, num2, hcf;

    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);

    hcf = findHCF(num1, num2);

    printf("HCF is %d and %d is %d\n", num1, num2, hcf);

    return 0;
}