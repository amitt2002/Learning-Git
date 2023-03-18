#include<stdio.h>
int main() {
    int a, b;
    printf("Hello \n Enter a number :");
    scanf("%d", &a);
    switch (a<7)
    {
    case 1: printf("even");
        break;
    
    default:printf("odd");
        break;
    }
return 0;
}