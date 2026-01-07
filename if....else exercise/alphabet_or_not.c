#include <stdio.h>

int main()
{
    char ch = 'A';
    printf("Enter number of character = ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <='z')
    {
        printf("%c is entered");
    }

    else
    {
        printf("%c is not entered");
    }
    return 0;
}