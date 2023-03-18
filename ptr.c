#include<stdio.h>
int main(){
 int marks[] = {100 , 98 , 96};
 int mark[3] = {99, 97 , 95};
    printf("%d \n" , marks[0]);
    printf("%d \n" , marks[1]);
    printf("%d \n" , marks[2]);
int *ptr=&marks[1];

    printf("%u \n" , ptr);

    return 0;
}