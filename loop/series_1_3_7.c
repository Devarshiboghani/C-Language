#include <stdio.h>

int main()
{
    int i = 1, ser = 1;

    printf("Enter value = ");
    scanf("%d", &ser);

    while(i <= 10)
    {
        printf("series = %d\n", ser);

        i++;

        ser = (i * i)-(i - 1);
    }
    
    return 0;
}