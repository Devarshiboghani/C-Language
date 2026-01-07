#include <stdio.h>

void main()
{
    char s[11] = "google";
    int i = 0;
    int cnt = 0;

    while(s[i] != '\0')
    {
        if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='u' ||s[i]=='o')
        {
            cnt++;
        }
        i++;
    }
    printf("The number of vowels %d", cnt);
}