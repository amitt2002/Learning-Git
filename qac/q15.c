#include<stdio.h>
int main(){
    int s=0, n,i=1, t=0, j=1;
    printf("The Number(N):");
    scanf("%d",&n);
    
        do{
        s=s+i;
        i++;
        }while(i<=n);
        printf("Sum of 1 to N cunsucative natural numbers %d \n",s);
    
        do{
        t=t+j;
        j++;
        }while(t<=n);
        if(t==n+j-1){
            printf("If sum is %d of 1 to N cunsucative natural numbers then the number is:",n);
        printf("%d.", j=j-2);
        }
        else{
            printf("If sum is %d then the number is ",n); 
            printf("not  sum of N cunsucative natural numbers.");
        }
    
    return 0;
}