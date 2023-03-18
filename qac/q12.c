#include<stdio.h>
int main() {
    int i, n;
    printf("That number from hundred :");
    scanf("%d", &n);
    for(int i=n; i>=0; i--){
        printf("%d \n", i);
    }
return 0;
}