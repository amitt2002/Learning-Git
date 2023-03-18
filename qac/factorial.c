#include<stdio.h>
int main(){
    float a,b;
    float s=1;
    printf("Enter the number: ");
    scanf("%f", &a);
    for( b=1;b<=a;b++){
        s=s*b;
        printf("%f\n",b);
    }
    printf("Its factorial is :%f", s);
    return 0;
}