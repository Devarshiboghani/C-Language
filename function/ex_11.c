#include <stdio.h>

int getAddition(int, int);

int main()
{
    int a , b ;

    printf("Addition is %d\n", getAddition(46, 52));
    return 0;
}

int getAddition(int val1, int val2)
{
    return val1 + val2;
}