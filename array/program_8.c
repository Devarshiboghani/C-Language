#include <stdio.h>

int main()
{
    int i, n;

    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);

    int arr1[n], arr2[n];

    printf("Enter %d elements of the array : \n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for(i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
    }

    printf("Elements of the second array are : \n");

    for(i = 0; i < n; i++)
    {
        printf("%d", arr2[i]);
    }

    return 0;
}