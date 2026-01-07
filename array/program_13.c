#include <stdio.h>

int main()
{
    int i, j, n, cnt = 0;

    printf("Enter a number of elements : ");
    scanf("%d", &n);

    int arr[n], freq[n];

    printf("Enter %d elements :\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }

    for(i = 0; i < n; i++)
    {
        int dup = 1;
        for(j = i+1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                dup++;
                freq[j] = 0;
            }
        }
        if(freq[i] != 0)
        {
            freq[i] = dup;
        }
    }

    for(i = 0; i < n; i++)
    {
        if(freq[i] > 1)
        {
            cnt++;
        }
    }

    printf("Total number of elements : %d", cnt);

    return 0;
}