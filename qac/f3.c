#include<stdio.h>
void ptable(int x);
int main(){
     int n;
     printf("Table of :");
     scanf("%d", &n);
     ptable(n);
    return 0;
}
void ptable(int n){
    for(int i=1; i<=10; i++)
    {
        printf("%d \n", i*n);
    }
}