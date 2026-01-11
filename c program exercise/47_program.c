#include <stdio.h>

int main()
{
    float kl = 0, ltr = 0, ml = 0;

    printf("Enter number of kl = ");
    scanf("%f", &kl);

    ltr = kl*1000;
    ml = ltr*1000;

    printf("%.2f kl = %.0f ml", kl, ml);

    return 0;
}