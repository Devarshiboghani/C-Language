#include <stdio.h>

int main()
{
    int i, j, cnt = 0, val;

    for(i = 1; i <= 5; i++)
    {
        val = (i & 1) ? (cnt + 1) : (cnt + i);

        for(j = 1; j <= i; j++)
        {
            printf("%3d", val);
            
        if(i & 1)
            val++;
        else
            val--;

            cnt++;
        }
        printf("\n");
    }
    return 0;
}