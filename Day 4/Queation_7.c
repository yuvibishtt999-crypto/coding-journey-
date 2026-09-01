// write a program to swap two numbers without using third variable .

#include <stdio.h>

int main(){
    int a,b;

    printf("Enter the first number :");
    scanf("%d", &a);

    printf("Enter the first number :");
    scanf("%d", &b);
    
    a = a+b; // a = 10 + 20 = 30
    b = a-b; // b = 30 - 20 = 10 (oringnal a)
    a = a-b; // a = 30 - 10 = 20 (oringnal b)

    printf("After swapping :\n");
    printf("First number %d :\n", a);
    printf("Second number %d :\n",b);

    return 0;
}
