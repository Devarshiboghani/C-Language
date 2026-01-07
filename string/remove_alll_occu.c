#include <stdio.h>
#include <string.h>

void removeWord(char *str, const char *word)
 {
    char temp[1000];
    char *pos;
    int len = strlen(word);

    temp[0] = '\0';

    while ((pos = strstr(str, word)) != NULL) 
    {
        strncat(temp, str, pos - str);
        str = pos + len;
        if (*str == ' ') str++;
    }
    strcat(temp, str);
    strcpy(str, temp); 
}

int main() 
{
    char str[1000], word[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    printf("Enter the word to remove: ");
    scanf("%s", word);

    removeWord(str, word);

    printf("Modified string: %s\n", str);

    return 0;
}