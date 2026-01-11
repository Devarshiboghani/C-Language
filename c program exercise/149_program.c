#include <stdio.h>

int main()
{
    float distance = 0, petrol = 0, average = 0;

    printf("Enter total distance (in KM): ");
    scanf("%f", &distance);

    printf("Enter petrol used (in litres): ");
    scanf("%f", &petrol);

    average = distance / petrol;

    printf("Average = %.2f km/litre\n", average);

    return 0;
}
