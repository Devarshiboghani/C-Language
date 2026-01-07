#include <stdio.h>

int main()
{
    int n, i, arr[5], ele, val;

    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);

    printf("Enter %d elements : ", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the value insert(1 to %d) : ", n+1);
    scanf("%d", &val);
    printf("Enter the elements to insert : ");
    scanf("%d", &ele);

    for(i = n; i >= val; i--)
    {
        arr[i] = arr[i-1];
    }

    arr[val-1] = ele;
    n++;

    printf("Array after insert : ");
    for(i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}