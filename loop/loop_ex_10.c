#include <stdio.h>

int main()
{
    int i = 1;
     for( ; ;)
     {
        printf("%d\n", i);

        if(i == 5)
        break;

        i++;
     }

    return 0;
}