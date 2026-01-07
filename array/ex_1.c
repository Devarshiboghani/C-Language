#include <stdio.h>

int main()
{
    int i = 0;

    int arr[5];

    arr[0]=80;
    arr[1]=86;
    arr[2]=23;
    arr[3]=86;
    arr[4]=66;

    for(i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
        return 0;
}