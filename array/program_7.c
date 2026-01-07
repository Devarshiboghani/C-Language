#include <stdio.h>

int main()
{
    int i, n, cnt = 0;

    printf("Enter a value : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements :\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(arr[i] < 0)
        {
             cnt++;
        }
    }
              printf("Total negative elements : %d\n", cnt);

    return 0;
}