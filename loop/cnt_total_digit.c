#include <stdio.h>

int main()
{
    int val, cnt = 1;

    printf("value = ");
    scanf("%d", &val);

    while(val > 0)
    {

          printf("Total digit of the value %d is = %d\n", val, cnt);

          cnt++;

          val = val/10;

    }

    return 0;
}