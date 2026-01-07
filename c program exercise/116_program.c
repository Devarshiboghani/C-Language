#include <stdio.h>

int main()
{
    float ltr = 0, kl = 0;

    printf("Enter number of ltr = ");
    scanf("%f", &ltr);

    kl = ltr/1000;

    printf("%.0f ltr = %.2f kl", ltr, kl);

    return 0;
}