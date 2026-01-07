#include <stdio.h>

int main()
{
    char *names[4] = {"Alic", "Bob", "Charlie", "Diana"};

    printf("Names using string pointers:\n");
    for(int i = 0; i < 4; i++)
    {
        printf("%d.%s\n", i+1, names[i]);
    }

    printf("First character of each name:\n");
    for(int i = 0; i < 4; i++)
    {
        printf("%s starts with: %c\n", names[i], *names[i]);
    }
    
    return 0;
}