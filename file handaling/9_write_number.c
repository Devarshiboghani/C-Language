#include <stdio.h>

int main()
{
    FILE *fp;
    int i;

    fp = fopen("numbers.txt", "w");

    if(fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    for(i = 1; i <= 10; i++)
    {
        fprintf(fp, "%d\n", i);
    }

    fclose(fp);
    printf("Numbers 1-10 written to numbers.txt\n");

    return 0;
}