#include <stdio.h>

int main()
{
    float yr_salary = 0, mon_salary = 0;

    printf("Enter number of yr_salary = ");
    scanf("%f", &yr_salary);

    mon_salary = yr_salary / 12;

    printf("%.0f yr_salary = %.2f mon_salary\n", yr_salary, mon_salary);

    return 0;
}