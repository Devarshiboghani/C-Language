#include <stdio.h>

void displayNumbers(int[2][2]);

void displayNumbers(int num[2][2])
{
    printf("Displaying :\n");
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("%d\n", num[i][j]);
        }
    }
}

int main()
{
    int num[2][2];

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("Enter number [%d][%d]: ", i, j);
            scanf("%d", &num[i][j]);
        }
    }
        displayNumbers(num);
        
        return 0;
}