#include <stdio.h>

int main()
{
    int n, i, j = 0, k = 0;

    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);

    int arr[n], even[n], odd[n];

    printf("Enter %d elementes : \n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            even[j++] = arr[i];
        }
        else
        {
            odd[k++] = arr[i];
        }
    }

    printf("Even elements : ");
    for(i = 0; i < j; i++)
    {
        printf("%d", even[i]);
    }
    printf("\n");

    printf("Odd elements : ");
    for(i = 0; i < k; i++)
    {
        printf("%d", odd[i]);
    }
    printf("\n");

    return 0;
}