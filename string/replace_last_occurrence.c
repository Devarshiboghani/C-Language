#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], old, new;
    int i, index = -1;

    printf("Enter a string : ");
    gets(str);

    printf("Enter the character to replace : ");
    scanf("%c", &old);

    getchar();

    printf("Enter the new character : ");
    scanf("%c", &new);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == old)
        {
            index = i;
        }
    }

    if(index != -1)
    {
        str[index] = new;
    }
    
    printf("Last occurence of '%c' with '%c' : %s", old, new, str);

    return 0;
}