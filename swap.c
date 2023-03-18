#include<stdio.h>
void swap(int x, int y);
void _swap(int x);

int main(){
    int a=0;
    int b=1;
    swap(&a , &b);
     printf("a =%d \nb =%d \n", a, b);
    
    return 0;
}
void swap(int x ,int y){
    int t=*x;
     x=y;
     y=&t;
    printf("a =%d \nb =%d \n", *x, *y);
    return 0;
}