#include <stdio.h>

int main()
{
     int val;

     printf("Enter a value = ");
     scanf("%d", &val);

     int val_without_last = val/10;
     int second_last_digit = val_without_last%10;

     printf("second last digit is %d is %d", val, second_last_digit);
    return 0;
}