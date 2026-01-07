#include <stdio.h>

int main()
{
    char s[100], d[100];
    int i;

    printf("Enter string : ");
    fgets(s, sizeof(s), stdin);

    for(i = 0; s[i] != '\0'; i++)
    {
        d[i] = s[i];
    }

        d[i] = '\0';
        printf("Copied string : %s", d);
    return 0;
}