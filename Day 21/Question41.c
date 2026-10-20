// Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main(){
    int n, first, last, temp, divisor = 1, result;

    printf("Enter the number : ");
    scanf("%d", &n);

    last = n % 10;
    temp = n;

    while(temp >= 10){
        temp = temp / 10;
        divisor = divisor * 10;
    }

    first = temp;
    result = (n % divisor)/10;
    result = last * divisor + result * 10 + first;

    printf("RESULT = %d", result);
    return 0;
}