#include <stdio.h>

int main()
{
    char ch = 'i';
    printf("Enter alphabet = ");
    scanf("%c", &ch);

    if(ch=='i'||ch=='o'||ch=='a'||ch=='e'||ch=='u')
    {
        printf("%c is vowel");
    }

    else
    {
        printf("%c is consonant");
    }
    
    return 0;
}