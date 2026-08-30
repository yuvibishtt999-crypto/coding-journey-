#include <stdio.h>

int main()
{
    float area, circumferece, radius;
    scanf("%f", &radius);

    area = 3.14 * radius * radius;
    circumferece = 2 * 3.14 * radius;
    printf("area = %f\n circumferece=%f\n", area, circumferece);
    return 0;
}