// Write a program to implement a basic calculator using switch-case for +, -, *, /, %,

#include <stdio.h>

int main()
{
    int a, b;
    char op;

    printf("enter the first number :");
    scanf("%d", &a);

    printf("Enter the operater(+,-,*,/,%%)):");
    scanf(" %c", &op);

    printf("Enter the second number:");
    scanf("%d", &b);

    switch (op)
    {
    case '+':
        printf("result = %d\n", a + b);
        break;

    case '-':
        printf("result =%d\n", a - b);
        break;

    case '*':
        printf("result = %d\n", a * b);
        break;

    case '/':
        if (b != 0)
        {
            printf("reault = %d\n", a / b);
        }
        else
        {
            printf("Error :division by zero!");
        }
        break;

    case '%':
        if (b != 0)
        {
            printf("result = %d\n", a % b);
        }
        else
        {
            printf("Error :modulo by zero!");
        }
        break;

    default:
        printf("nothing matched");
    }

    return 0;
}