#include<stdio.h>
int main()
{
    int array[3][4],i,j;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
    printf("Enter value of matrix term(%d,%d)=",i+1,j+1);
    scanf("%d",&array[i][j]);
        }
    }
return 0;
}