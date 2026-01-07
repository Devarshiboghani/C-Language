#include <stdio.h>
#include <string.h>

void trimLeadingSpaces(char *str) 
{
    int i = 0;

    while (str[i] == ' ' || str[i] == '\t')
    {
        i++;
    }

    int j = 0;

    while (str[j]) 
    {
        str[j++] = str[i++];
    }
    
    str[j] = '\0'; 
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    trimLeadingSpaces(str);

    printf("String after trimming leading spaces: '%s'\n", str);

    return 0;
}