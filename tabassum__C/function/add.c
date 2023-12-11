#include <stdio.h>
void add();

void add()
{
    int a, b, c;
    printf("enter two number");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("sum is %d", c);
}

int main()
{
    add();
    return 0;
}