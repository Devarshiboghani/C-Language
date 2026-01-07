#include <stdio.h>

int main()
{
    char ch = 'A';
    char *ptr_ch;
    char name[] = "Hello";
    char *ptr_str;

    ptr_ch = &ch;
    ptr_str = name;

    printf("Character : %c\n", ch);
    printf("through pointer : %c\n", *ptr_ch);
    printf("String: %s\n", name);
    printf("Through pointer: %s\n", ptr_str);
    printf("First charater of string: %c\n", *ptr_str);
    
    return 0;
}