#include <stdio.h>

void decimalToBinary(int val)
{
    if(val > 1)
    {
        decimalToBinary(val / 2);
    }
    printf("%d", val % 2);
}

int main()
{
    int decimal;

    printf("Enter a decimal number : ");
    scanf("%d" ,&decimal);

    printf("Binary representation : ");
    decimalToBinary(decimal);

    printf("\n");

    return 0;
}