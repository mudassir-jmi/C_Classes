#include <stdio.h>

void main()
{
    int n, x, r, sum = 0;
    printf("Armstrong Numbers are :");
    for (int n = 1; n <= 1000; n++)
    {
        x = n;
        while (x != 0)
        {
            r = x % 10;
            sum = sum + r * r * r;
            x = x / 10;
        }
        if (sum == n)
            printf("%d", n);
    }
}