#include <stdio.h>

int main()
{
    int n, i, j, val;
    int arr[n];

    printf("Enter size of array : ");
    scanf("%d", &n);

    printf("Enter elements in array : ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
   
    for(i = 0; i < n; i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                val = arr[i];
                arr[i] = arr[j];
                arr[j] = val;
            }
        }
    }

    printf("Elements of array in ascending order : ");
    for(i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}