#include<stdio.h>

int main() {

    int a; 
    printf("Write a number :");
    scanf("%d"  , &a);
    
   printf("Remainder if /2= %d \n",a%2);

    if(a%2==0)
    {
      printf("Even");
    }
    else{
         printf("Odd");
    }
return 0;
}