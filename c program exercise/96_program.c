#include <stdio.h>

int main()
{
    float min = 0, hr = 0;

    printf("Enter number of min = ");
    scanf("%f", &min);

    hr = min/60;

    printf("%.0f min = %.2f hr", min, hr);
    
    return 0;
}