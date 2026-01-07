#include <stdio.h>

int main()
{
    char str[100];
    int i, alphabets, digits, character;
    i = alphabets =  digits =  character = 0;
    
    printf("Enter string : ");
    fgets(str, sizeof(str), stdin);

        for(i = 0; str[i] != '\0'; i++)
        {
            if((str[i] >= 'A' && str[i] <= 'Z') || str[i] >= 'a' && str[i] <= 'z')
            {
                alphabets++;
            }
            
            else if(str[i] >= '0' && str[i] <= '9')
            {
                digits++;
            }

            else
            {
                character++;
            }
            i++;
        }

        printf("Alphabets : %d\n", alphabets);
        printf("Digits : %d\n", digits);
        printf("Special character : %d\n", character);

    return 0;
}