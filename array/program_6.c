#include <stdio.h>

int main()
{
    int i , n, ecnt = 0 ,ocnt = 0;

    printf("Enter a value : ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d elements : \n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            ecnt++;
        }
        else
        {
            ocnt++;
        }
    }

    printf("Total even number : %d\n", ecnt);
    printf("Total odd number : %d\n", ocnt);
    
    return 0;
}