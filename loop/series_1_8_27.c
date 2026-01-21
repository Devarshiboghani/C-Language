// Write a program to print series as below : 1 8 27 64 125 216 243 512 729 1000

#include <stdio.h>

int main()
{
    int i = 1, qu = 1;

    while(i <= 10)
    {
        printf("%d ", qu);

        i++;

        qu = i * i * i;
    }

    return 0;
}