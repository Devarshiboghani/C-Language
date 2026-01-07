#include <stdio.h>

int main()
{
    int val = 1 , fact = 1, sum = 0 ;

    printf("Enter value = ");
    scanf("%d", &fact);

    printf("All factors of %d are =  \n", fact);

    for(val = 1; val <= fact; val++)
    {
        if(fact % val == 0)
        {
            printf("%d\n", val);
            sum += val;
        }
    }
         printf("Sum of all factors of %d  is = %d\n",fact ,sum);

    return 0;
}