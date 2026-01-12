#include <stdio.h>

int main()
{
    int eng, math, sci, hist, comp;
    int total;
    float percentage;

    printf("Enter marks of English: ");
    scanf("%d", &eng);

    printf("Enter marks of Math: ");
    scanf("%d", &math);

    printf("Enter marks of Science: ");
    scanf("%d", &sci);

    printf("Enter marks of History: ");
    scanf("%d", &hist);

    printf("Enter marks of Computer: ");
    scanf("%d", &comp);

    total = eng + math + sci + hist + comp;
    percentage = (total / 500.0) * 100;

    printf("\nTotal Marks = %d", total);
    printf("\nPercentage = %.2f%%\n", percentage);

    if (percentage >= 90)
    {
        printf("Grade: A+");
    }

    else if (percentage >= 80)
    {
        printf("Grade: A");
    }
    else if (percentage >= 70)
    {
        printf("Grade: B");
    }
    else if (percentage >= 60)
    {
        printf("Grade: C");
    }
    else if (percentage >= 40)
    {
        printf("Grade: D");
    }
    
    else
    {
        printf("Grade: Fail");
    }

    return 0;
}