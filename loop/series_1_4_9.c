// Write a program to print series as below : 1 4 9 16 25 36 49 64 81 100

#include <stdio.h>

int main()
{
    int i = 1, sq = 1;

    while(i <= 10)
    {

        printf("%d ", sq);

        i++;

        sq = i * i;
    }

    return 0;
}