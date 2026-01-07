#include <stdio.h>

int main()
{
    float min=0, hr=0, day=0;

    printf("Enter number of min = ");
    scanf("%f", &min);

    hr = min*60;
    day = hr*24;

    printf("%f min = %f day\n",min, day);
    return 0;
}