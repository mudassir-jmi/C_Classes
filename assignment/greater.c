#include <stdio.h>
int main()
{
    int a = 6, b = 4, c = 1, k;

    if (a > b)
    {
        if (a > c)
            k = a;
        else
            k = c;
    }
    else
    {
        if (b > c)
            k = b;
        else
            k = c;
    }
    printf("greater number is %d", k);
    return 0;
}
