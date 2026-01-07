#include <stdio.h>

int getHighest(int, int);

int main()
{
    printf("Highest value = %d\n", getHighest(45, 85));
    printf("Highest value = %d\n", getHighest(63, 16));

    return 0;
}

int getHighest(int val1, int val2)
{
    if(val1 > val2)
    return val1;
    else if(val2 > val1)
    return val2;
}