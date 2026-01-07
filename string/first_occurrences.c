#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], ch;
    int i, position = -1;

    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("Enter a character to find : ");
    scanf("%c", &ch);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            position = i;
        }
    }

    if(position != -1)
    {
        printf("The first occurrence of '%c' is at position %d\n.", ch, position);
    }
    else
    {
        printf("charcater %c is not found in a string\n.", ch);
    }
    return 0;
}