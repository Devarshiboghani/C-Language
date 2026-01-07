#include <stdio.h>

void printInteger(int);
void printFloat(float);

int main()
{
    
    printInteger(79);
    printFloat(46.65);

    printInteger(54);
    printFloat(45.78);

    return 0;
}

void printInteger(int val)
{
    printf("The value is %d\n", val);
}
void printFloat(float val)
{
    printf("The value is %.2f\n", val);
}