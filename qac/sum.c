# include<stdio.h>

int main() {
    int a, b; 
      printf("Enter a=");
      scanf("%d", &a);
    
      printf("Enter b=");
      scanf("%d", &b);
      
      printf("%d \n",a+b);

    int sum=a+b;

    printf("sum = %d ",sum);
     
    printf("%d \n", a++);
    printf("%d \n", ++a);
    printf("%d \n", a); 
    printf("%d \n", --a);
    printf("%d \n", a--); 
    printf("%d \n", a); 

    return 0;
}