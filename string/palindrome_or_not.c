#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, len, flag;
    flag = 0;

    printf("Enter a string : ");
    gets(str);

    len = strlen(str);

    for(i = 0; i < len; i++)
    {
        if(str[i] != str[len - i -1])
        {
            flag = 1;
        }
    }
    if(flag == 0)
    {
        printf("%s is a palindrome String", str);
    }
    else
    {
        printf("%s is not a palindrome String", str);
    }
    
    return 0;
}