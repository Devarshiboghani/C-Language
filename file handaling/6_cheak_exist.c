#include <stdio.h>

int main()
{
    FILE *fp = fopen("maybe.txt", "r");
    if(fp == NULL)
    {
        printf("File does not exist or cannot be open\n");
        return 1;
    }

    printf("File opened successfully\n");

    fclose(fp);

    return 0;
}