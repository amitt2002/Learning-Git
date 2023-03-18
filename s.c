#include<stdio.h>
void swap(int *x, int *y);


int main(){
    int a=0, b=1;
    swap(&a , &b);
     printf("a =%d \nb =%d \n", a, b);
    
    return 0;
}
void swap(int *x ,int *y)address
    int t=*x;
     *x=*y;
     *y=t;
    printf("a =%d \nb =%d \n", *x, *y);
    return 0;
}
