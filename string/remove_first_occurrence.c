#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], ch;
    int i = 0, len;

    printf("Enter a string : ");
    gets(str);

    printf("Enter the character that you want to remove :");
    scanf("%c", &ch);


    while(i < strlen(str) && str[i] != ch)
    {
        i++;
    }

    while(i < strlen(str))
    {
        str[i] = str[i+1];
        i++;
    }

    printf("The final string after removing first occurrence '%c' : %s", ch, str);
    return 0;
}