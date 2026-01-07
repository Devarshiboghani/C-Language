#include <stdio.h>

int main()
{
    int i,n ;

    printf("Enter a value : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements : \n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Negative elements in the array are : \n");
    for(i = 0; i < n; i++)
    {
        if(arr[i] < 0)
        {
            printf("%d\n", arr[i]);
        }
    }
    
    return 0;
}