#include <stdio.h>

void findUnique(int arr[], int n)
{
    printf("Enter elements : \n");
    for(int i = 0; i < n; i++)
    {
      int  isUnique = 1;

        for(int j = 0; j < n; j++)
        {
           if(i != j && arr[i] == arr[j])
           {
                isUnique = 0;
            }
        }
             if(isUnique)
             {
                  printf("%d",arr[i]);
             }
        }
        printf("\n");
}

int main()
{
    int n;

    printf("Enter a number of elements : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    findUnique(arr, n);

    return 0;
}