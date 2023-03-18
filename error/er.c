#include<stdio.h> 
int main() { 
    char sno; 
    printf("enter no between 0 to 6:-"); 
    scanf("%c", &sno); 
        
        do{ 
            if(sno<54&&sno>48){
                break;
            }
          printf("wrong");
          printf("wrong input,try again...");
              scanf("%c", &sno);
        } 
        while(1) ;
    printf("\nRight , \n Thank you."); 
return 0; 
}
