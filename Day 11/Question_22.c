// Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main()
{
    float SP, CP, Profit_percentage, Loss_percentage;
    
    printf("Enter the cost price : ");
    scanf("%f", &CP);

    printf("Enter the sell price : ");
    scanf("%f", &SP);

    if (SP > CP)
    {
        Profit_percentage = ((SP - CP) / CP) * 100;
        printf("profit= %.2f%%", Profit_percentage);
    }
    else if (CP > SP)
    {
        Loss_percentage = ((CP - SP) / CP) * 100;
        printf("loss= %.2f%%", Loss_percentage);
    }
    else
    {
        printf("no profit no loss");
    }

    // Loss_percentage =(( CP - SP)/CP)*100;
    // Profit_percentage = ((SP - CP)/CP)*100;

    return 0;
}