#include<stdio.h>
int main() {
    int marks;
    printf("Enter obtain marks : ");
    scanf("%d", &marks);
    if(marks<30 && marks>=0){
    printf("Fail \n" );
    }
    else if(marks<=100 && marks>=30){
    printf("Pass \n" );
    }
    else{
        printf("Invalid\n");
    }

    marks>=30&&marks<=100?printf("Pass"):printf("Fail");
    return 0;
}