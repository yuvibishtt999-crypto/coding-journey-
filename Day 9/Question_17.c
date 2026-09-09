// write a program to find the roots of a quadratic equation and catagorize them.

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, D, root1, root2;

    printf("Enter a ,b and c:");
    scanf("%f %f %f", &a, &b, &c);

    D = b * b - 4 * a * c; // (bxb - 4ac)

    if (D > 0)
    {
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);

        printf("Two distinct real roots\n");
        printf("Root1 = %.2f\n", root1);
        printf("Root2 = %.2f\n", root2);
    }
    else if (D == 0)
    {
        root1 = -b / (2 * a);

        printf("Two equal real roots\n");
        printf("Root1 = Root2 = %.2f", root1);
    }
    else
    {
        printf("No real roots\n");
    }
    return 0;
}