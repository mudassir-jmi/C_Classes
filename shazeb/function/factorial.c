#include <stdio.h>
void fact();
void main()
{
    fact();
}

void fact()
{
    int a, fact = 1;
    printf("enter a  number");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
        fact = fact * i;
    printf("%d", fact);
}