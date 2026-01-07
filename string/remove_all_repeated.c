#include <stdio.h>
#include <string.h>

void removeDuplicates(char str[])
{
     int hash[256] = {0};
    int n, i = 0, result = 0;

     while(str[i])
     {
        char temp = str[i];
        if(hash[(int)temp] == 0)
        {
         hash[(int)temp] = 1;
         str[result++] = temp;
        }
        i++;
     }
     str[result] = '\0';
}

int main()
{
    char str[100];
    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);
    
    removeDuplicates(str);
    printf("String after removing duplicates : %s\n ", str);

    return 0;
}