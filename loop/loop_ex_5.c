#include <stdio.h>

int main()
{
    int i = 1, val = 0, sum = 0;

    while(i <= 3)
    {
        printf("Enter value no %d : ", i);
        scanf("%d", &val);

        sum = sum + val;
        i++;
    }

    printf("Sum is %d\n", sum);

    return 0;
}