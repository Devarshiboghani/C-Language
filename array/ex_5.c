#include <stdio.h>

void getarray(int[]);

void getarray(int arr[])
{
    printf("Elements of array are : ");
    for(int i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
    }
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    
    getarray(arr);

    return 0;
}