/*Write a program to calculate electricity bill based on units consumed with these rates:
First 100 units at ₹5/unit
Next 100 units at ₹7/unit
Next 100 units at ₹10/unit
Above at ₹12/unit*/

#include <stdio.h>

int main()
{
    int n, total;
    printf("unit:");
    scanf("%d", &n);

    if (n > 0 && n <= 100)
    {
        total = n * 5;
        printf("electricity bill is :%d", total);
    }
    else if (n > 100 && n <= 200)
    {
        total =(500+((n-100)*7));
        printf("Electricity bill is :%d", total);
    }
    else if (n > 200 && n <= 300)
    {
        total = (500 + 700) + ((n-200) * 10);
        printf("Electricity bill is :%d", total);
    }
    else if (n > 300)
    {
        total = (500 + 700 + 1000) + ((n-300) * 12);
        printf("Electricity bill is :%d", total);
    }

    return 0;
}