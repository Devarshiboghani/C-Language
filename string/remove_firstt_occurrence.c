#include <stdio.h>
#include <string.h>

void removeFirstoccurrence(char *str, const char *word)
{
    char *pos = strstr(str, word);
    if(pos != NULL)
    {
        int len = strlen(word);
        memmove(pos, pos + len, strlen(pos + len) + 1);
    }
}

int main()
{
    char str[100], word[100];

    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the word to find : ");
    scanf("%s", word);

    removeFirstoccurrence(str, word);

    printf("Modified string : %s\n", str);
    
    return 0;
}