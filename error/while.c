#include<stdio.h>
#include<math.h>
float areaC( float x);
float areaR(float x, float y);
float areaS(float x);
float main(){
    char n;
    float c,l,w,s,p;
    do{
        printf("Area of Given Polygons\n");
        printf(" Press 'c' for Circle\n Press 'r' for Rectangle \n Press 's' for Square \n");
        scanf("%c" , &n);
        if(n=='c'){
            printf("Radius of circle = ");
             scanf("%f", & c);
             printf("Area = %f \n", areaC(c) );
        } 
        else if(n=='r') {
             printf("Length of rectangle = ");
             scanf("%f", & l);
             printf("Width of rectangle = ");
             scanf("%f", & w);
             printf("Area = %f \n", areaR(l,w) );
        } 
        else if( n=='s'){
            printf("Side of square = ");
             scanf("%f", & s);
             printf("Area = %f \n", areaS(s) );
        }
    printf("Do you want to check again? \n Press 1 for Yes :");
    scanf("%f",&p);
    }while(p==1.00);
    printf("Thank you!");
 return 0;

}
float areaC( float x){
    float A= 3.14*x*x;
    return A;
}
float areaR( float x ,float y){
    float A= x*y;
    return A;
}
float areaS(float x){
    float A=x*x;
    return A;
}