#include <stdio.h>

int main(){
    char n[32];

    printf("Enter the bianry number :");
    scanf("%s",n);

    for (int i = 0; n[i] != '\0'; i++)
    {
       if(n[i] == '0'){
          n[i] = '1';
       }
       else{
        n[i] = '0';
       }
     
    }
      printf("%s",n);
    
    return 0;
}