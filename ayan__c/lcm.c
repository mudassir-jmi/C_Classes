#include <stdio.h>
void main()
{
    int a = 2, b = 4, c;
    for (c = a < b ? a : b; c <= a * b; c++)
    {
        if (c % a == 0 && c % b == 0)
            break;
    }
    printf("lcm of a&b %d", c);
}