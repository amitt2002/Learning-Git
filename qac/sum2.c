#include<stdio.h>
int main()
{
    int a,b,c,n,sum,t,rev;
    printf("Enter three digit number ");
    scanf("%d",&n);
    a=n/100;
    t=n%100;
    b=t/10;
    c=t%10;
    printf("\nFirst digit is %d \nsecond digit is %d \nthird digit is %d",a,b,c);
    sum=a+b+c;
    printf("\nsum of digits is %d",sum);
    rev=100*c+10*b+a;
    printf("\nafter reversing the digit is %d",rev);
    return 0;
}