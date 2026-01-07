#include <stdio.h>

int main()
{
    int i, n, key, found = 0;

    printf("Enter the number of elements in  the array : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements : \n",n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the elements to serch : ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            printf("Elements %d found at position %d.\n", key, i+1);
            found = 1;
            break;
        }
    }

    if(!found)
    {
        printf("Elements %d not found in the array.\n", key);
    }
    
    return 0;
}