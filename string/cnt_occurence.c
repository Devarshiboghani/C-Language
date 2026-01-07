#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], ch;
    int i, cnt = 0;

    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to count : ");
    scanf("%c", &ch);

    for(i = 0; i < strlen(str) ;i++)
    {
        if(str[i] == ch)
        {
            cnt++;
        }
    }

    printf("The character %c is %d times in the string ", ch, cnt);

    return 0;
}