#include <stdio.h>
void main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
            printf("it is a leap year");
        else
            printf("it is a leap year");
    }
    else
    {
        if (year % 4 == 0)
            printf("leap year");
        else
        {
            printf("Not a leap year");
        }
    }
}
