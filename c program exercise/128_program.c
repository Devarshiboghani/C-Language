#include <stdio.h>

int main()
{
    float hr = 0, min = 0, sec = 0;

    printf("Enter number of hr = ");
    scanf("%f", &hr);

    min = hr*60;
    sec = min*60;

    printf("%.0f hr = %.2f sec", hr, sec);

    return 0;
}