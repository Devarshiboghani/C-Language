// Accept a value and find whether it is palindrome no or not.

#include <stdio.h>

int main()
{
    int val, d , r = 0, s;

    printf("Enter value = ");
    scanf("%d", &val);

    s = val;

    while(val > 0)
    {
        d = val % 10;
        r = (r * 10) + d;
        val = val / 10;

    }
        if(r == s)
        {
            printf("%d is a palindrome\n", s);
        }

        else      
        {
            printf("%d is not a palindrome\n", s);
        }

    return 0;
}