#include <stdio.h>

int main()
{
    int arr[100], n, i, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");   // 1 3 4 5 6
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Store last element
    temp = arr[n - 1];

    // Shift elements to right
    for(i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Put last element at first position
    arr[0] = temp;

    printf("Array after right rotation:\n");   // 6 1 3 4 5
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
