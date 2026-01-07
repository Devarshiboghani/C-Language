#include <stdio.h>

int main()
{
    int i, j, val, diff;

    for(i = 1; i<=5; i++)
    {
        diff = 4;
        val = i;

        for(j = 1; j <= i; j++)
        {
            printf("%3d", val);

            val += diff;
            diff--;
        }
        printf("\n");
    }
    return 0;
}