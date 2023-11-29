
#include <stdio.h>

void add(); // global declare

void add()
{
    int a, b, c; // local variable
    printf("enter a two number");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("sum is %d", c);
}

// multiply function

void main()
{
    add(); // function call
}