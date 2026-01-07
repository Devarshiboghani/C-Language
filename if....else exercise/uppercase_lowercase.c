#include <stdio.h>

int main()
{
    int ch = 0;
    printf("Enter alphabet : ");
    scanf("%c", &ch);

    if(ch>='A' && ch<='Z')
    {
        printf("%c is uppercase");
    }

    else if(ch>='a' && ch<='z')
    {
        printf("%c is lowercase");
    }

    else
    {
        printf("%c is invalidcase");
    }
    
    return 0;
}