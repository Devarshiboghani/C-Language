#include <stdio.h>

int binaryToDecimal(long long binary)
 {
    int decimal = 0, i = 0, r;

    while (binary != 0) 
    {
        r = binary % 10;
        binary /= 10;
        decimal += r * pow(2, i);
        i++;
    }

    return decimal;
}

int main()
 {
    long long binary;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    int decimal = binaryToDecimal(binary);
    printf("The decimal equivalent is: %d\n", decimal);

    return 0;
}