#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], ch;
    int i, last = -1;

    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("Enter a charcater to find : ");
    scanf("%c", &ch);

    for(i = 0; i <= strlen(str); i++)
    {
        if(str[i] == ch)
        {
            last = i;
        }
    }

    if(last == -1)
    {
        printf("The last occurrence of %c is at last.", ch);
    }
    else
    {
        printf("charcater %c is not found in a string %d.\n", ch, last+1);
    }

    return 0;
}