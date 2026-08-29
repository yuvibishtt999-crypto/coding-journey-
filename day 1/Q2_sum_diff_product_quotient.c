#include <stdio.h>

int main(){
    int a, b , sum, sub , product, divide;
    scanf("%d %d", &a , &b);

    sum = a+b;
    sub = a-b;
    product = a*b;
    divide = a/b;

    printf("sum = %d\n sub = %d\n product = %d\n divide = %d\n ", sum , sub, product, divide);
    return 0;
}