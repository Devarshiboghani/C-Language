#include <stdio.h>

int main()
{
    int n, i, arr[100], ele, val;

    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);

    printf("Enter %d elements : \n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the value insert(1 to ) : ");
    scanf("%d", &val);
    printf("Enter the elements to insert : ");
    scanf("%d", &ele);

    for(i = n - 1; i >= ele - 1; i--) {
        arr[i + 1] = arr[i];
    }

    arr[ele - 1] = val;
    n++;

    printf("Array after insert : \n");
    for(i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}