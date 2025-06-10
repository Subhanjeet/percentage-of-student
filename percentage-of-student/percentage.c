#include <stdio.h>
int main()
{
    int marks[6], i, total = 0;
    printf("Enter the marks of 6 subject: ");
    for (i = 0; i < 6; i++)
    {
        scanf("%d", &marks[i]);
        total += marks[i];
    }
    float percentage;
    percentage = (total / 600.0) * 100;
    printf("Your percentage is: %.2f%%", percentage);
    return 0;
}