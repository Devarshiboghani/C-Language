#include <stdio.h>

    int checkArmstrongNumber(int num) {
   int val, d, n = 0, flag;
   double result = 0.0;

   for (val = num; val != 0; ++n) {
      val /= 10;
   }

   for (val = num; val != 0; val /= 10) {
      d = val % 10;

      result += pow(d, n);
   }
   if (round(result) == num)
      flag = 1;
   else
      flag = 0;
   return flag;
}
    
int main()
{
    int n, flag;

    printf("Enter a number = ");
    scanf("%d", &n);

    flag = checkArmstrongNumber(n);
    if(flag == 1)
    {
        printf("%d is an Armstrong number.\n", n);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", n);
    }

    return 0;
}