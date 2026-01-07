#include <stdio.h>
#include <string.h>

void trimTrailingSpaces(char *str)
{
    int i = strlen(str) - 1;

    while (i >= 0 && isspace((unsigned char)str[i])) 
    {
        str[i] = '\0';
        i--;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    trimTrailingSpaces(str);

    printf("String after trimming trailing spaces: '%s'\n", str);

    return 0;
}