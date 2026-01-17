#include <stdio.h>
#include <math.h>
#include <conio.h>
 int main (){
 	int a,b,c;
	 float d,x1,x2,x3;
 	printf("Nhap a b c\n");
 	scanf("%d %d %d",&a,&b,&c);
 	d=(b*b)-(4*a*c);
 	if(d==0){
 	     x1=(-b)/(2*a);
 	     printf("\nPhuong trinh co nghiem kep x1 = x1 = %f",x1);}
	else if (d>0){
		x2=(-b+sqrt(d)/(2*a));
 	    x3=(-b-sqrt(d)/(2*a));
		printf("\nPhuong trinh co 2 nghiem x1 = %f \n x2 = %f",x2,x3);}
	else if (d<0){
		printf("\nPhuong trinh vo nghiem");	}
 }
