#include <stdio.h>

int main()
{
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if(age > 18)
    {
        printf("age is eligible for voting");
    }

    else
    {
        printf("age is not eligible for voting");
    }
    
    return 0;
}