#include <stdio.h>

int main()
{
    FILE *fp;
    int num, sum = 0;

    fp = fopen("numbers.txt", "r");

    if(fp == NULL)
    {
        printf("Error: numbers.txt not found!\n");
        return 1;
    }

    printf("Numbers from file: ");

    while(fscanf(fp, "%d", &num) != EOF)
    {
        printf("%d", num);
        sum = sum + num;
    }

    printf("\nSum of all numbers: %d\n", sum);

    fclose(fp);
    
    return 0;
}