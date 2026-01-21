// Write a program to print series as below : 2 4 6 8 10 12 14 16 18 20

#include <stdio.h>

int main()
{
    int i = 1, even = 2;

    while(i <= 10)
    {

        printf("%d ", even);

        i++;

        even = even + 2;

    }

    return 0;
}