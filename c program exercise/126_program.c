#include <stdio.h>

int main()
{
    float min = 0, sec = 0;

    printf("Enter number of min = ");
    scanf("%f", &min);

    sec = min*60;

    printf("%.0f min = %.2f sec", min, sec);
    
    return 0;
}