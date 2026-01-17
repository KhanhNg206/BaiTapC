#include <stdio.h>
#include <math.h>
#include <conio.h>
 int main (){
 	int kq,sl,f;
 	printf("\n Nhap so dia DVD can mua ");
 	scanf("%d",&sl);
 	kq=sl*5000;
 	f=kq-kq*0.1;
 	if (sl > 10){
 	printf("\n Gia tien = %d",f);	}
 	 else {
 	printf("\n Gia tien = %d",kq);
 	return 0 ; }
 }
	 
