#include <stdio.h>

int main()
{
    int arr[100], n, i, j, count, dupCount = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        count = 1;

        if(arr[i] == -1)
            continue;

        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                arr[j] = -1;   // mark as counted
            }
        }

        if(count > 1)
        {
            dupCount++;
        }
    }

    printf("Total number of duplicate elements = %d", dupCount);

    return 0;
}
