// Write a program to check if a number is a palindrome.

#include <stdio.h>

int main()
{
    int num, reverse = 0, remainder;
    printf("Enter the number:");
    scanf("%d", &num);
    int a = num;

    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }
    if (a == reverse)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palaindrome");
    }
    return 0;
}