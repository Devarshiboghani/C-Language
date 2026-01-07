#include <stdio.h>

int main()
{
    char arr1[11] = {'g', 'o', 'o', 'g', 'l', 'e', '\0'};
    char arr2[11] = "google";

    printf("Char Array Value is : %s\n", arr1);
    printf("String Value is : %s\n", arr2);

    return 0;
}