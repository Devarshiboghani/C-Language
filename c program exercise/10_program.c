#include <stdio.h>

int main()
{
    int month = 0, year = 0, week = 0;

    printf("Enter month = ");
    scanf("%d", &month);

     year = month/12;
     week = year*52;

    printf("%d month = %d week", month, week);
    return 0;
}