// Write a program to display the day of the week based on a number (1–7) using switch-case.

#include <stdio.h>

int main()
{
    int i;
    printf("Enter the number :");
    scanf("%d", &i);

    switch (i)
    {
    case 1:
        printf("The day is Monday\n");
        break;
    case 2:
        printf("The day is Tuesday\n");
        break;
    case 3:
        printf("The day is Wednesday\n");
        break;
    case 4:
        printf("The day is Thursday\n");
        break;
    case 5:
        printf("The day is Friday \n");
        break;
    case 6:
        printf("The day is Saturday\n");
        break;
    case 7:
        printf("The day is sunday\n");
        break;
    default:
        printf("nothing matched\n");
    }
    return 0;
}