/*write a program thats accepts a percentage (0-100) add assigs a grade based on the following criteria :

90-100: Grade A
80-89: Grade B
70-79: Grade C
60-69: Grade D
 below 60: Grade F */

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the percenatge ");
    scanf("%d", &n);

    if (n >= 90 && n <= 100)
    {
        printf("Grade A");
    }
    else if (n >= 80 && n <= 89)
    {
        printf("Grade B");
    }
    
    else if (n >= 70 && n <= 79)
    {
        printf("Grade C");
    }
    else if (n >= 60 & n <= 69)
    {
        printf("Grade D");
    }
    else
    {
        printf("Grade F");
    }

    return 0;
}