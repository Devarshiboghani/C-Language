#include <stdio.h>

int main()
{
    int val = 1, fact = 1;

    printf("Enter value = ");
    scanf("%d", &fact);

    printf("All factors of %d are = \n", fact);

    while(val > 0)
    {

        if(fact % val == 0)
        {
            printf("%d\n", val);
        }

        val++;
    }
    return 0;
}