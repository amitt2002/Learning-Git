#include<stdio.h>
int fib(int n);

int main(){
    int n;
    printf("Fibonacci series no ");
    scanf("%d", &n);
    printf("%d", fib(n));
    
    return 0;
}
int fib(int n)
{
   if(n==1){
    return 1;
     }
    else if(n==0){
        return 0;
    }
   
  int fib= fib(n-2) + fib(n-1);
   return fib;
}