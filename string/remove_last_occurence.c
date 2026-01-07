#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], ch;
    int i , index = -1, len;

    printf("Enter a string : ");
    gets(str);

    printf("Enter the character that you want to remove :");
    scanf("%c", &ch);

    len = strlen(str);

    for(i = 0; i < len; i++)
    {
        if(str[i] == ch)
        {
            index = i;
        }
    }

    if(index != -1)
    {
        i = index;

        while(i < len)
        {
            str[i] = str[i+1];
            i++;
        }
    }
    
    printf("The final string after removing last occurrence '%c' : %s", ch, str);
    return 0;
}