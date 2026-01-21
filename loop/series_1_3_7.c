// Write a program to print series as below : 1 3 7 13 21 31 43 57 73 91 

#include <stdio.h>

int main()
{
    int i = 1, ser = 1;

    while(i <= 10)
    {
        printf("%d ", ser);

        i++;

        ser = (i * i)-(i - 1);
    }
    
    return 0;
}