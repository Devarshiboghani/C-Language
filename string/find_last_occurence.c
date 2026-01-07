#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], word[100], *pos = NULL, *temp;
    int index = -1;

    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the word to find: ");
    fgets(word, sizeof(word), stdin);

    temp = str;
    while ((temp = strstr(temp, word)) != NULL)
     {
        pos = temp; 
        temp++;     
    }

    if (pos != NULL)
     {
        index = pos - str;
        printf("Last occurrence of '%s' is at index %d.\n", word, index);
    } 
    else
     {
        printf("Word '%s' not found in the string.\n", word);
    }

    return 0;
}