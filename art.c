#include<stdio.h>
int main(){
 float price=200.00;
 float *ptr=&price;
 printf("%d \n", ptr);
 ptr++;
 printf("%d \n" , ptr);

 char star='*';
 char *ptrr=&star;
 printf("%d \n", ptrr);
 ptrr++;
 printf("%d \n", ptrr);
 ptrr--;
 printf("%d \n", ptrr);


    return 0;
}