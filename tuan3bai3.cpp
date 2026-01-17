#include <stdio.h>
#include <math.h>
 int main(){
 	float a,b,c;
 	printf("Nhap vao ba so a ,b, c : \n");
 	scanf("%f %f %f",&a,&b,&c);
 	if(a >b && a>c && b>c) {
 		printf("\n 1st Number = %f",c);
 		printf("\n 2nd Number = %f",b);
 		printf("\n 3rd Number = %f",a);
 		printf("\n The 3rd Number is the greatest among three");
	 }
 }
