#include <stdio.h>
void main()
{
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d  = %d", num, i, num * i);
        printf("\n");
    }
}
