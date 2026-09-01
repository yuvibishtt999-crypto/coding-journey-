// write a program to input time in seconds and convert it to hours : minutes : seconds format.

#include <stdio.h>

int main(){
    
    int H;
    int M;
    int S;
    int R;

    printf("Enter the time in seconds :");
    scanf("%d", &S);

    H = S / 3600;
    R = S % 3600;
    M = R / 60;

    printf("Time = %d:%02d", H , M);

    return 0;
}
