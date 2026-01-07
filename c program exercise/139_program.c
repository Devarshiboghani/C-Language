#include <stdio.h>

int main()
{
    float ml = 0, ltr = 0, kl = 0;

    printf("Enter number of ml = ");
    scanf("%f", &ml);

    ltr = ml/1000;
    kl = ltr/1000;

    printf("%.0f ml = %.2f kl", ml, kl);
    
    return 0;
}