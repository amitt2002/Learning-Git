#include<stdio.h>
#include<math.h>
int main() {
  int  sno , no, rep, days ; 
  do{
     printf("Hello,Possible Future day. \n");
     printf(" 0 for Monday \n 1 for Tuesday \n 2 for Wednesday \n 3 for Thusday \n 4 for Friday \n 5 for Saturday \n 6 for Sunday \n ");
     printf("Current Day \n Enter Serial no:- \n");
     scanf("%d", &sno);
        while(sno>=7||sno<0)
        {
              printf("Wrong Input try again \n Serial no:-");
              scanf("%d", &sno);
        }
     printf("The after next day:-..\n");
     scanf("%d", &no);
      switch((no+sno)%7)
      {
        case 0: printf("Monday"); break;
        case 1: printf("Tuesday");break;
        case 2: printf("Wednesday");break;
        case 3: printf("Thusday");break;
        case 4: printf("Friday");break;
        case 5: printf("Saturday");break;
        case 6: printf("Sunday");break;
      }
     printf(" \nCheck again ?\n Press 0 for YES,\n Else any key.");
   
    scanf("%d",&rep);
   }while(rep==0);
return 0;
}