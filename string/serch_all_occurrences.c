#include <stdio.h>

int main()
{
    char str[100], ch;
    int i, cnt = 0;

    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a charcater to serch : ");
    scanf("%c", &ch);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            printf("%d", i+1);
            cnt++;
        }
    }

    if(cnt == 0)
    {
        printf("None");
    }

    printf("Total occurence = %d", cnt);

    return 0;
}