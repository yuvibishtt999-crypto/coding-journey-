// write a program to input a character and check whether it is a vowel or consonent using if else.

#include <stdio.h>

int main()
{
    char c, a, e, i, o, u;
    printf("Enter the character ;");
    scanf("%c", &c);

    if (c == 'a' || c == 'e' || c == 'i' || 'c' == o || c == 'u')
    {
        printf("it is a vowel");
    }
    else
    {
        printf("it is a consonent");
    }
    return 0;
}