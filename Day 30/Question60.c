// Count positive, negative, and zero elements in an array.

#include <stdio.h>

int main(){
    int i , n ;
    int positive = 0 , negative = 0 , zero = 0;

    printf("Enter the size of the array : ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the elements of the array : ");
    
    for(i = 0; i <n; i++){
        scanf("%d", &a[i]);

    }

    for(i = 0; i < n; i++){
       
        if(a[i] > 0){
           positive = positive + 1;
        }
        else if(a[i]<0){
            negative = negative + 1;
        }
        else{
            zero = zero + 1;
        }
    }
    printf("\npositive = %d", positive);
    printf("\nnegative = %d", negative);
    printf("\nZero = %d", zero);

    return 0;
}