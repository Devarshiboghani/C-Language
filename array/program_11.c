#include <stdio.h>

int main()
{
    int i ,j, n, cnt ;
    int freq[n], arr[n];

    printf("Enter a number of elements : ");
    scanf("%d", &n);

    printf("Enter  %d elements : \n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
       freq[i] = -1;
    }

    for(i = 0; i < n; i++)
    {
        cnt = 1;
        for(j = i+1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                cnt++;
                freq[j] = 0;
            }
        }
        if(freq[i] != 0)
        {
            freq[i] = cnt;
        }
    }

    printf("element | freq\n");
    for(i = 0; i < n; i++)
    {
        if(freq[i] != 0)
        {
            printf("%d | %d\n", arr[i], freq[i]);
        }
    }
    return 0;
}