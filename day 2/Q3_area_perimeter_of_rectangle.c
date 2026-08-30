#include <stdio.h>

int main(){
    int  length, breadth,area,perimeter;
    //input length and breadth
    scanf("%d %d", &length,&breadth);
    
    area = length*breadth;
    perimeter =2*(length+breadth);

    printf("area = %d\n perimeter = %d\n",area,perimeter);
    return 0;
}