#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("sample.txt" ,"w");

    if(fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "Hello World!\n");
    fprintf(fp, "This is my first file.\n");
    fprintf(fp, "Learning C file handling.\n");

    fclose(fp);

    printf("Data written to sample.txt successfully!\n");

    return 0;
}