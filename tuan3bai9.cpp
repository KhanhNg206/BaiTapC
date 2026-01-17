#include <stdio.h>
 int main(){
 	float cp,sp,loss=0,pro=0,proper,lossper;
 	printf("\nNhap vao gia von va gia ban :\n");
 	scanf("%f%f",&cp,&sp);
 	if(cp>sp){
 		loss=cp-sp;
 		lossper=(loss/cp)*100;
 		printf("\nNguoi ban lo va lo %.0f phan tram ",lossper);}
	else if(sp>cp){
		pro=sp-cp;
		proper=(pro/cp)*100;
		printf("\nNguoi ban loi va loi %.0f phan tram",proper);
	}
 }
