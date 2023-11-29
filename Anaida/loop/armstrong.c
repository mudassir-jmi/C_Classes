#include <stdio.h>

void main()
{
    int n, x, r, sum;
    printf("Armstrong Numbers are :");
    for (int n = 1; n <= 1000; n++)
    {
        sum = 0;
        x = n;
        while (x != 0)
        {
            r = x % 10;
            sum = sum + r * r * r;
            x = x / 10;
        }
        if (sum == n)
            printf("%d\n", n);
    }
}