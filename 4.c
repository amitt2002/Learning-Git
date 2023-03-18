#include<stdio.h>
int main(){
    int i=0;
do{
    printf("dd");
    if(i>10)
    continue;
    i++;
}while(i<20);

printf("%d",i);
return 0;
}