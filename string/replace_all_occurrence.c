#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], old, new;
    int i;

    printf("Enter a string : ");
    gets(str);

    printf("Enter the character to replace : ");
    scanf("%c", &old);

    getchar();

    printf("Enter the new character : ");
    scanf("%c", &new);

    for(i = 0; i < strlen(str); i++)
    {
        if(str[i] == old)
        {
            str[i] = new;
        }
    }

    printf("All occurence of '%c' with '%c' : %s", old, new, str);
    
    return 0;
}