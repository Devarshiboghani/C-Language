#include <stdio.h>
#include <string.h>

int main()
{
    char ch1[20]={'G', 'o', 'o', 'g', 'l', 'e', '\0'};
    char ch2[20]={'G', 'o', 'o', 'g', 'l', 'e'};
    char ch3[20]="Google";

    printf("Length of string is : %d\n", strlen(ch1));
    printf("Length of string is : %d\n", strlen(ch2));
    printf("Length of string is : %d\n", strlen(ch3));
    
    return 0;
}