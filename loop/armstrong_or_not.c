#include <stdio.h>

int main()     
{
    int val, d , a = 0, s;

    printf("Enter value = ");
    scanf("%d", &val);

    s = val;

    while(val > 0)
    {
        d = val % 10;
        a = a + d * d * d;
        val = val / 10;
    }

    if(s == a)
    {
        printf("%d is a armstrong\n", s);
    }
    else
    {
        printf("%d is not a armstrong\n", s);
    }

    return 0;
}