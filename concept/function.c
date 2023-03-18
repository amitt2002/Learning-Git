#include<stdio.h>
void printgm();
void printge();
int main(){
    float e;
    do{
        printf("For AM press 1 for PM press 0 :");
        scanf("%f",&e);
        if(1.00==e){
             printgm();
             break;
        }
        else if(0.00==e){
           printge();
           break;
        }
        else{
            continue;
        }
    }while(1);
 

 return 0;
}
void printgm(){
   printf(" Good Morning");
}
void printge(){
    printf("Good Evening");
}