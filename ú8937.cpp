#include <math.h>
#include <stdio.h>
#include <conio.h>
 int main(){
 	float x,y,S;
    printf("\nNhap so nguyen x :");
    scanf("%d",&x);
    printf("\nNhap so nguyen y : ");
    scanf("%d",&y);
    S=sqrt(1+x*x+y*y)/(3+(x+y)*(x+y));
    printf("\nKet qua la : %d",S);
    
 }
