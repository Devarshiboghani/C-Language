#include <stdio.h>
#include <string.h>

void trimSpaces(char *str)
 {
    int start = 0, end = strlen(str) - 1;

    while (isspace((unsigned char)str[start])) {
        start++;
    }

    while (end >= start && isspace((unsigned char)str[end])) {
        end--;
    }

    int i = 0;
    while (start <= end) {
        str[i++] = str[start++];
    }
    str[i] = '\0'; 
}

int main() 
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    trimSpaces(str);

    printf("Trimmed string: '%s'\n", str);

    return 0;
}