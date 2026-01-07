#include <stdio.h>
#include <string.h>

void removeExtraSpaces(char *str)
 {
    int i = 0, j = 0;
    int len = strlen(str);

    while (str[i] == ' ') i++;

    for (; i < len; i++) 
    {
        if (str[i] != ' ')
         {
            str[j++] = str[i];
        } 
        else if (j > 0 && str[j - 1] != ' ')
         {
            str[j++] = ' ';
        }
    }

    if (j > 0 && str[j - 1] == ' ') j--;

    str[j] = '\0'; 
}

int main() 
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    removeExtraSpaces(str);

    printf("String after removing extra spaces: \"%s\"\n", str);

    return 0;
}