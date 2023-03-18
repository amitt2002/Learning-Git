#include<stdio.h>
#include<math.h>
int power(int a);
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d", &n);

    printf("Its square is :%f", pow(n, 5));

    return 0;
}