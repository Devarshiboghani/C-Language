#include <stdio.h>

int main()
{
    int val ,hf, fact = 1;

    printf("Enter value = ");
    scanf("%d", &fact);
    
    hf = fact;

    printf("All factors of %d are = \n", fact);
 
    for(val = 1; val >= 1; val++)    
    {
        if(fact % val == 0)
        {
            printf("%d\n", val);
        }
    }

    printf("Highest factor is = %d\n",hf);

    return 0;
}