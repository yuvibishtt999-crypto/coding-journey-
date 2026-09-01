// write a program to calculate simple and compound interest for given principal , rate and time.

#include <stdio.h>
#include <math.h>

int main()
{
    float p, r, t, CI, SI; // p = principal , r = rate , t = time.

    printf("Enter the principal value :");
    scanf("%f", &p);

    printf("Enter the value of rate :");
    scanf("%f", &r);

    printf("Enter the time :");
    scanf("%f", &t);

    SI = p * r * t / 100;

    CI = p * pow((1 + r / 100), t) - p;

    printf("The value of simple interest is :%.2f\n", SI);
    printf("The value of compound interest is :%.2f\n", CI);

    return 0;
}