#include<stdio.h>
int main()
{
    int i,j,a;
    char c;
    printf("Enter a row Char");
    scanf("%d",&a);
    for(i=1;i<a+1;i++)
    { 
        if(i<27){
          for(j=1;j<i+1;j++)
          {
            char c=64+j;
            printf("%c",c);
          } 
        }
        else{
        printf("over for alfabet");
        break;
        }
     printf("\n");
    
    }
   
return 0;
}