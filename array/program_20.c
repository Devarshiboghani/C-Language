#include <stdio.h>

int main()
{
    int arr[100], even[100], odd[100];
    int n, i, j, e = 0, o = 0, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Separate even and odd elements
    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
            even[e++] = arr[i];
        else
            odd[o++] = arr[i];
    }

    // Sort even array (ascending)
    for(i = 0; i < e - 1; i++)
    {
        for(j = i + 1; j < e; j++)
        {
            if(even[i] > even[j])
            {
                temp = even[i];
                even[i] = even[j];
                even[j] = temp;
            }
        }
    }

    // Sort odd array (ascending)
    for(i = 0; i < o - 1; i++)
    {
        for(j = i + 1; j < o; j++)
        {
            if(odd[i] > odd[j])
            {
                temp = odd[i];
                odd[i] = odd[j];
                odd[j] = temp;
            }
        }
    }

    printf("Sorted Even Elements:\n");
    for(i = 0; i < e; i++)
        printf("%d ", even[i]);

    printf("\nSorted Odd Elements:\n");
    for(i = 0; i < o; i++)
        printf("%d ", odd[i]);

    return 0;
}
