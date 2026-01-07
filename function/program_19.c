#include <stdio.h>

int palindrome(int);

int main()
{
    int val, d, s, r = 0;

    printf("Enter value = ");
    scanf("%d", &val);

    s = val;

    while(val > 0)
    {
        d = val % 10;
        r = (r * 10) + d;
        val = val / 10;

    }
        if(s == r)
        {
            printf("%d is a palindrome\n",s );
        }

        else      
        {
            printf("%d is not a palindrome\n", s);
        }

    return 0;
}

int palindrome(int val)
{
    return val;
}