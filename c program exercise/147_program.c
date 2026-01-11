#include <stdio.h>

int main()
{
    float value1 = 0, value2 = 0, value3 = 0;

    printf("Enter number of value1 = ");
    scanf("%f", &value1);

    printf("Enter number of value2 = ");
    scanf("%f", &value2);

    printf("Enter number of value3 = ");
    scanf("%f", &value3);

   float sum = value1 + value2 + value3;
   float average = sum/3;

    printf("%.2f sum = %.2f average\n",sum, average);

    return 0;
}