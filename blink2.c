#include<stdio.h>
int swap(int a, int b);
int main()
{
    printf("enter two number");
    int x,y;
    scanf("%d%d",&x,&y);
    printf("before x=%d,y=%d",x,y);
    swap(x,y);
}
int swap(int a,int b)
{
int t;
printf("\n after swapping x=%d ,y=%d",b,a);
t=a;
a=b;
b=t;
printf("\n after swapping x=%d ,y=%d",a,b);
printf("\n after swapping x=%d ,y=%d",b,a);
return 0;
}