#include<stdio.h>
int main(){
    int n,i;
    printf("Table of : ");
    scanf("%d", &n);
   for( int i=0; i<=9*n; i++)
    {
       if(i%n != 0)
       {
        continue;
       }
       printf("%d \n" , i+n);
        
    }
    return 0;
}