#include <stdio.h>

void sum(); // function declare

void main()
{
    // fact();
    // function call

    sum();
}

void fact()
{
    int x = 3, fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    printf("factorial is %d", fact);
}

void sum()
{
    int x = 7, sum = 0;
    for (int i = 1; i <= x; i++)
    {
        sum = sum + i;
    }
    printf("sum is %d", sum);
}
