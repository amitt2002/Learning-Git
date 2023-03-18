#include<stdio.h>
int main(){
    int a,h,t,b;

    printf("enter 3 digit no");
    scanf("%d", &a);
    b=(a-a%100)/100+(a%100-a%10)/10+a%10;
    printf("%d",b);
    return 0;
}