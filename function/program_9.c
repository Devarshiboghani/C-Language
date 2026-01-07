#include <stdio.h>

double power(double val, int ex)
{
    double result = 1;
    for(int i = 0; i < ex; i++)
    {
        result *= val;
    }
    return result;
}

int main()
{
    double val;
    int ex;

    printf("Enter the value : ");
    scanf("%lf", &val);

    printf("Enter a ex : ");
    scanf("%d", &ex);

    double result = power(val, ex);
    printf("%.2lf raised to the power %d is %.2lf\n", val, ex, result);

    return 0;
}