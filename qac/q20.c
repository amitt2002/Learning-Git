#include<stdio.h>
int main(){
    int n,i,a,b;
    printf("First no : ");
    scanf("%d", &a);
    printf("Second no : ");
    scanf("%d", &b);
    printf("Odd number between them :\n");
   for( int i=a; i<=b; i++)
    {
       if(i%2 != 1)
       {
        continue;
       }
       printf("%d \n" , i);
        
    }
    return 0;
}