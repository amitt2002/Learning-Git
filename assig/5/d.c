#include<stdio.h>
int main (){
    int a,i,f;
    printf("Enter the number for row ");
    scanf("%d",&a);
    for(i=1;i<a+1;i++){
        for(f=0;f<a;f++){
            if(f<(a-i))
            printf("_");
            else
            printf("%d",a-f+i);

        }
        printf("\n");
    }
    return 0;
}

