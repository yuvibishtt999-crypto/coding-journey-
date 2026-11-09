// Search for an element in an array using linear search.

#include <stdio.h>

int main(){
    int i , n , found = -1 , key ;

    printf("Enter the size of the array : ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the elements : ");
    for(i = 0 ; i < n ; i++){
        
        scanf("%d", &a[i]);
    }
    printf("search the elements : ");
    scanf("%d", &key);

    for(i = 0; i<n; i++){
         if(a[i]==key){
          found = i;
          break;
         }

    }
    printf("Found at index = %d", found);
   
    return 0;
}