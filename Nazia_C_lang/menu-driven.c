#include <stdio.h>
#include <stdlib.h>
void main()
{
    int r, x, l, b, area;
    while (1)
    {
        printf("\n 1 area of circle");
        printf("\n2 area of rectanngle");
        printf("\n3 exit");
        printf("enter your choice");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            printf("enter a radius");
            scanf("%d", &r);
            r = 3.14 * r * r;
            printf("enter of is %d ", r);
            break;
        case 2:
            printf("enter lenth & breath");
            scanf("%d %d", &l, &b);
            area = l * b;
            printf("area of rectangle is %d", area);
            break;
        case 3:
            exit(0);
        default:
            printf("invalid choice");
        }
    }
}