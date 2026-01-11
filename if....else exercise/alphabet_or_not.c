#include <stdio.h>

int main()
{
    char ch;

    printf("Enter number of character = ");
    scanf("%c", &ch);

    if((ch >= 'A' && ch <='Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("Character is an Alphabet");
    }

    else
    {
        printf("Character is NOT an Alphabet");
    }
    
    return 0;
}