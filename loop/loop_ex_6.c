#include <stdio.h>

int main()
{
    int i = 1, cnt = 0;

    while(i <= 5)
    {
        if(i % 2 == 0)
        cnt++;

        i++;
    }
    printf("Total even number are %d\n", cnt);

    return 0;
}