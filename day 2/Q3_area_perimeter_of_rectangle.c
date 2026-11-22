// write a program to convert the temperature from celsius to fahrenite

#include <stdio.h>

int main() // F = (C x 9/5) + 32
{
    float c;
    printf("Enter the temperaturte in celsius:");
    scanf("%f", &c);

    printf("The temperature in Fahrenite is %f", (c * 9 / 5) + 32);

    return 0;
}