#include <stdio.h>

int main()
{
    int value;

    printf("Enter a number: ");
    scanf("%d", &value);

   if (value > 0)
        printf("Number is Positive");
    else if (value < 0)
        printf("Number is Negative");
    else
        printf("Number is Zero");

    return 0;
}