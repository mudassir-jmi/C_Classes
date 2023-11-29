#include <stdio.h>
#include <stdlib.h>
void main()
{
    int r, x, l, b, area;
    while (1)
    {
        printf("\n 1 area of circle");
        printf("\n 2 area of rectangle");
        printf("\n 3 exit");
        printf("\n enter your choice");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            printf("enter a radius");
            scanf("%d", &r);
            r = 3.14 * r * r;
            printf("area of circle is %d", r);
            break;
        case 2:
            printf("enter length and breath ");
            scanf("%d %d", &l, &b);
            area = l * b;
            printf("area of rectangle %d", area);
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("invalid choice");
        }
    }
}