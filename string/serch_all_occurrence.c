#include <stdio.h>
#include <string.h>

void findOccurrences(char *str, char *word)
{
    int cnt = 0;
    char *pos = str;

    while((pos = strstr(pos, word)) != NULL)
    {
         cnt++;
        printf("Occurrence %d found at index: %ld\n", cnt, pos - str);
        pos += strlen(word);
    }

    if(cnt == 0)
    {
        printf("%s not found in a string.\n", word);
    }
    else
    {
        printf("Total occurence : %d\n", cnt);
    }
}

int main()
{
    char str[100], word[100];

    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the word to find : ");
    scanf("%s", word);

    findOccurrences(str, word);

    return 0;
}