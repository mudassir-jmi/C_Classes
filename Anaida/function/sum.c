#include <stdio.h>

void add(); // global function declaration

void multiply();

void add()
{
    int a, b, c; // local variable
    printf("enter a two number");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("sum is %d", c);
}

void multiply()
{
    int a, b, c; // local variable
    printf("enter a two number");
    scanf("%d%d", &a, &b);
    c = a * b;
    printf("multiply is %d", c);
}

void main()
{
    // add();
    multiply();
}
