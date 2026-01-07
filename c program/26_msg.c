#include <stdio.h>

int main()
{
    char sval[200];
    printf("Enter your name = ");
    scanf("%s", sval);

    printf("Hello, %s\n", sval);

    return 0;
}