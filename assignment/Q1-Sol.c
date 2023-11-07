#include <stdio.h>
int main()
{
    int age, amt, year;
    float si;
    printf("Enter Your Age and Amount to Invest: ");
    scanf("%d%d", &age, &amt);
    if (age >= 18 && age <= 70 && amt <= 100000)
    {
        if (age <= 30)
            year = 30;
        else if (age > 50)
            year = 10;
        else
            year = 20;
        si = amt * 10 * year / 100.0;
        printf("\nYour maturity amount will be %f", amt + si);
    }
    else
    {
        printf("You are not Eligible for the Scheme!");
    }
    return 0;
}
