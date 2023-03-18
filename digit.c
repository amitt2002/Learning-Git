#include<stdio.h>
int main(){
    int a,o,t,h,e;
    printf("Enter the three digit no");
    scanf("%d",&a);
    h=a/100;
    t=a/10 -h*10;
    o=a-100*h-t*10;
    e=h+t+0;
    printf("reverse of the number=%d", o*100+t*10+h);
    printf("\nsum of digit=%d",e);

    return 0;

}