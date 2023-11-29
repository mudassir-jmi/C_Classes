#include <stdio.h>

// parameter
int sum(int a, int b)
{ // function defination
    return a + b;
}

int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    // argument
    // int result = multiply(10, 9);
    // printf("result : %d", result);

    int Total = AddTwoNum(20, 10);
    printf("Total : %d", Total);
}

int AddTwoNum(int num1, int num2)
{
    return num1 + num2;
}
