// Write a program to display the month name and number of days using switch-case for a given month number.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the numnber :");
    scanf("%d", &n);

    switch (n){
    case 1:
        printf("Month January , Days 31\n");
    break;

case 2:
    printf("Month febuary , Days 28\n");
    break;

case 3:
    printf("Month March , Days 30\n");
    break;

case 4:
    printf("Month April , Days 31\n");

case 5:
    printf("Month May , Days 30\n");
    break;

case 6:
    printf("Month June , Days 31\n");
    break;

case 7:
    printf("Month July , Days 30\n");
    break;

case 8:
    printf("Month August , Days 31\n");
    break;

case 9:
    printf("Month Sepetember , Days 30\n");
    break;

case 10:
    printf("Month OCtober , Days 31\n");
    break;

case 11:
    printf("Month November , Days 30\n");
    break;

case 12:
    printf("Month December , Days 31\n");
    break;
    }
    return 0;
}