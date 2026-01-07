#include <stdio.h>

void  concatenate(char str1[], char str2[])
{
int i = 0, j = 0;
{
     while(str1[i] != '\0')
     {
        i++;
     }

     while(str2[j] != '\0')
     {
        str1[i] = str2[j];
        i++;
        j++;
     }
     str1[i] = '\0';
}
}
int main()
{
    char str1[100], str2[100];

    printf("Enter string1 : ");
    fgets(str1, sizeof(str1), stdin);

    for(int i = 0; str1[i] != '\0' ;i++)
    {
        if(str1[i] == '\n')
        {
            str1[i] = '\0';
        }
    }

    printf("Enter string2 : ");
    fgets(str2, sizeof(str2), stdin);

    for(int i = 0; str2[i] != '\0'; i++)
    {
        if(str2[i] == '\n')
        {
            str2[i] = '\0';
        }
    }

    concatenate ( str1, str2);
    {
        printf("Concatenate : %s", str1);
    }
    return 0;
}