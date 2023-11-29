#include <stdio.h>
void main()
{
    int i, num;
    printf("enter a number: ");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++)
        printf("%d x %d=%d \n", num, i, num * i);
    // printf("\n");
}