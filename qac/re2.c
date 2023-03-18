#include<stdio.h>
 int sum(int n);
 int main(){
    int p , n;
    printf("Enter Natural number :");
    scanf("%d", &p);
    printf("Sum is :");
    printf("sum is: %d", sum(p));
 }
 int sum(int n)
 {
     if(n==1){
        return 1;
       }
   int s=sum(n-1)+n;
   return s;
 }