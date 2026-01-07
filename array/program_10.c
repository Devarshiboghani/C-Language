#include <stdio.h>

int main()
{
    int n, i, val, arr[100];

    printf("Enter a number of elements : ");
    scanf("%d", &n);

    printf("Enter %d elements :\n",n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter a value(1 to %d) : ", n);
    scanf("%d",&val);

    if(val < 1 || val > n)
    {
        printf("invalid value %d", n);
    }
    else
    {
    for(i = val - 1; i < n-1; i++)
    {
        arr[i] = arr[i+1];
    }
    n--;

    printf("Array after declaration :\n");
    for(i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}
    return 0;
}