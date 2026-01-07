#include <stdio.h>

void compareString(char str1[], char str2[])
{
    int i = 0, flag = 0;

    while(str1[i] != '\0' && str2[i] != '\0')
    {
        if(str1[i] != str2[i])
        {
            flag = 1;
        }
        i++;
    }

    if(flag == 0 && (str1[i] != '\0' || str2[i] != '\0'))
    {
        flag = 1;
    }

    if(flag == 0)
    {
        printf("String are equal.\n");
    }
    else if(str1[i] > str2[i])
    {
        printf("String1 is greater than String2.\n");
    }
    else
    {
        printf("String1 is less than String2.\n");
    }
}

int main()
{
    char str1[100], str2[100];

    printf("Enter the firsh string : ");
    scanf("%s", str1);

    printf("Enter the second string : ");
    scanf("%s", str2);

    compareString(str1, str2);

    return 0;
}