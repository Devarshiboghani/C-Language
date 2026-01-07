#include <stdio.h>

int main()
{
    int val, d= 0, r = 0;

    printf("Enter value = ");
    scanf("%d", &val);
    
    while(val > 0)
    {
        d = val % 10;
        r = (r * 10) + d;
        val = val / 10;
    }

    printf("%d",r);
    return 0;
}