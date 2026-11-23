// Find the second largest element in an array.


#include <stdio.h>

int main(){
    int i, n,largest , second;

    printf("Enter the size of the array : ");
    scanf("%d", &n);

    int a[n];
    
    printf("Enter the elements : ");
    for( i = 0 ; i < n; i++){
        scanf("%d", &a[i]);
    }

    largest = a[0];
    second = -1;

    for(i = 1; i < n; i++){

        if(a[i] > largest ){
             
            second = largest;
            largest = a[i];
        }
        else if( a[i] > second && a[i] != largest){

            second = a[i];
        }
        
    }
    printf("The second largest element is : %d", second);
    
    return 0;
}