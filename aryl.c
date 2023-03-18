#include<stdio.h>
main(){
    int arry[10];
    int *ptr=&arry[0];
    for(int i=0 ; i<10; i++){
        printf("%d \n" ,i);
        scanf("%d \n", (ptr+1));

    }
    for(int i=0; i<10 ; i++){
        printf("%d of %d\n", arry[i], i);

    }
   return 0;

}