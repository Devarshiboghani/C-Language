#include <stdio.h>
#include <string.h>

void removeCharacter(char str[], char ch)
{
    int i, j = 0;
    int len = strlen(str);

    for(i = 0; i < len; i++)
    {
        if(str[i] != ch)
        {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main()
{
    char str[100], ch;

    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Enter the character to remove : ");
    scanf("%c", &ch);

    removeCharacter(str, ch);

    printf("String after removing '%c' : %s\n", ch, str);
    
    return 0;
}