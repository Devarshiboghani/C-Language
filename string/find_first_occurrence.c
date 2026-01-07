#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], word[100], *position;
    int i;

    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a word find : ");
    scanf("%s", word);

    position = strstr(str, word);

    if(position != NULL)
    {
        i = position - str;
        printf("The first word '%s' is at i %d.\n", word, i);
    }
    else
    {
        printf("The word '%s' was not found in the string.\n", word);
    }

    return 0;
}