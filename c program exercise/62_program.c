#include <stdio.h>

int main()
{
    float kl = 0, ltr = 0;

    printf("Enter number of kl = ");
    scanf("%f", &kl);

    ltr = kl*1000;

    printf("%.0f kl = %.2f ltr", kl, ltr);
    
    return 0;
}