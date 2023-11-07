#include <stdio.h>
void main()
{
    int x, sum = 0;
    printf("enter a value x");
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
        sum = sum + i;
    }
    printf("%d", sum);
}