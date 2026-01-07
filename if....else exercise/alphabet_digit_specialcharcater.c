#include <stdio.h>

int main()
{
    int ch = 0;
    printf("Enter ch : ");  
    scanf("%c", &ch);
    
    if(ch >= 'A' && ch <='Z'||ch >= 'a' && ch <= 'z')
    {
        printf("%c is alphabet");
    }

    else if(ch>='0' && ch<='9')
    {
        printf("%d is digit");
    }

    else
    {
        printf("%c is special charcater");
    }

    return 0;
}