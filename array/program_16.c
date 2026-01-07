#include <stdio.h>

void reverseArray(int arr[], int size)
{
    int start = 0, end = size - 1, val;

    while(start < end)
    {
        val = arr[start];
        arr[start] = arr[end];
        arr[end] = val;

        start++;
        end--;
    }
}

int main()
{
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements : \n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    reverseArray(arr, n);

    printf("Reversed array:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    return 0;
}