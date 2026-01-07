#include <stdio.h>
#include <string.h>

void removeLastOccurrence(char *str, char *word)
 {
    char *lastOccurrence = NULL;
    char *temp = str;

    while ((temp = strstr(temp, word)) != NULL) 
    {
        lastOccurrence = temp;
        temp += strlen(word);
    }

    if (lastOccurrence != NULL) 
    {
        int len = strlen(word);
        memmove(lastOccurrence, lastOccurrence + len, strlen(lastOccurrence + len) + 1);
    }
}

int main()
{
    char str[200], word[50];

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    printf("Enter the word to remove: ");
    fgets(word, sizeof(word), stdin);
    
    word[strcspn(word, "\n")] = '\0'; 
    removeLastOccurrence(str, word);

    printf("Modified string: %s\n", str);

    return 0;
}