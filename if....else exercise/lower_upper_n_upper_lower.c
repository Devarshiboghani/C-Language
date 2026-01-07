#include <stdio.h>

int main()
{
    char lc, uc;
    int ascii;

    printf("Enter a lowercase character = ");
    scanf("%c", &lc);
    printf("Enter a uppercase character = ");
    scanf("%c", &uc);

    ascii = lc;
    uc = ascii - 32;

    if(lc >= 'a' && lc <= 'z')
    {
        printf("its uppercase = %c\n", uc);
    }
    
    ascii = uc;
    lc = ascii + 32;
    
    if(uc >= 'A' && uc <= 'Z')
    {
        printf("its lowercase = %c", lc);
    }

    return 0;
}