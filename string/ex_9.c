#include <stdio.h>
#include <string.h>

int main()
{
    char ch[10]="google";
    char ch2[10]=".com";
    strcat(ch, ch2);
    printf("Value of first string is : %s", ch);
    
    return 0;
}