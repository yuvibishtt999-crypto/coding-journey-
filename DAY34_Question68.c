// Delete an element from an array.

#include <stdio.h>

int main(){

    int i , n , pos ;

    printf("Enter the size of the array : ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the elements : ");
    for(i = 0 ; i < n; i++){

        scanf("%d", &a[i]);

    }

    printf("Enter the position of the element you want to delete : ");
    scanf("%d", &pos);

    for(i = pos; i < n; i++){
        a[i] = a[i+1];
    }
    n--;

    printf("Array after the delete the element : ");

    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

}
