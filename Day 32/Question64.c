// Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main()
{
    int n, digit;
    int count[10] = {0};
    int max = 0, result = 0;

    printf("Enter the integer number : ");
    scanf("%d", &n);

    if (n < 0)
    {
        n = -n;
    }

    while (n > 0)
    {

        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    for (int i = 0; i < 10; i++)
    {
        if(count[i] > max){
             max = count[i];
             result = i; 
        }
    
    }

    printf("%d", result);

    return 0;
}