// Write a program to print series as below : 1 3 5 7 9 11 13 15 17 19

#include <stdio.h>

int main()
{
    int i = 1, odd = 1;

    while(i <= 10)
    {

        printf("%d ", odd);

        i++;

        odd = odd + 2;

    }

    return 0;
}