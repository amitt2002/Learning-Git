#include<stdio.h>
int main() {
    char sno ,s;
    printf("Enter no between 0 to 6:-");
    scanf("%c",&sno);
        while(sno>54||sno<48)
        {
              printf("Wrong Input try again ,Serial no:-");
              scanf("%c",&sno);
              scanf("%c",&sno);
        }
    printf("\nRight ,\n Thank you.");
return 0;
}
