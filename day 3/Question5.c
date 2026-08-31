// write a program to convert temperature from celsius to fahrenhiet.

#include <stdio.h>

int main()
{
    float c, f;
    printf("Enter the temperature in celsius %d");
    scanf(" %f", &c);

    f = (c * 9 / 5) + 32;
    printf("The temperature in fahrenite is %f", f);
    return 0;
}