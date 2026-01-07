#include <stdio.h>
#include <string.h>

int main()
{
    char str[100] = "This is google.com";
    char *sub;

    sub = strstr(str, "google");
    printf("\nSubstring is : %s", sub);
    
    return 0;
}