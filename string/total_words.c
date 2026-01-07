#include <stdio.h>

int main()
{
    char str[100];
    int i , wordcnt = 0;

    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if((str[i] != ' '|| str[i] == '\n' || str[i] == '\t') && (i > 0 && str[i-1] != ' ' && str[i-1] != '\n' && str[i-1] != '\t'))
        {
            wordcnt++;
        }
    }

        if(i > 0 && str[i-1] != ' ' && str[i-1] != '\n' && str[i-1] != '\t')
        {
            wordcnt++;
        }

        printf("Total number of words : %d\n", wordcnt);

    return 0;
}