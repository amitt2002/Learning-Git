#include<stdio.h>
int sum(int a, int b);
 int main(){
    int a ,b,s;
    printf("First Number : ");
    scanf("%d", &a);
    printf("Second Number : ");
    scanf("%d", &b);
    s = sum(a,b);
    printf("Sum is : %d" , s);
 return 0;
 }

 int sum(int x, int y)
 {
    int  sum=x+y;
    return sum;
 }