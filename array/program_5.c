#include <stdio.h>

int main()
{
    int n, i, l, sl;

    printf("Enter the size of array : ");
    scanf("%d", &n);

    if(n < 2)
    {
        printf("Array must have at least two elements.\n");
         return 0;
    }

    int arr[n];

    printf("Enter %d elements of the array : \n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    l = sl = -1;
    for(i = 0; i < n; i++)
    {
        if(arr[i] > l)
        {
            sl = l;
            l = arr[i];
        }
        else if(arr[i] > sl && arr[i] != l)
        {
            sl = arr[i];
        }
    }

    if(sl == -1)
    {
          printf("No second largest element exists.\n");
    }
    else
    {
        printf("The second largest element is: %d\n", sl);
    }
    return 0;
}