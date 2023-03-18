#include<stdio.h>
int main(){
    int n;
    printf("Enter a ODD number:");
    scanf("%d", &n);

    while (n%2 != 1 ){
        printf("Try again : ");
        scanf("%d", &n);
    }
    printf("Thank You!\n");

    printf("Enter a EVEN number:");
    do{
       scanf("%d", &n);
       if(n%2 != 1){
          break;
       }
      printf("Try again : ");
    }while(1);
   printf("Thank You!\n"); 
    return 0;
}