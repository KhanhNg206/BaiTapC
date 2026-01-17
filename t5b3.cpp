#include<stdio.h>
#include<conio.h>
 int main(){
 	int a,i;
 	float b;
 	printf("Nhap so :");
 	scanf("%d",&a);
 	for(i=1;i<=a;i++){
 		b=a*i;
 		printf("%d x %d = %f \n" ,a,i,b );
	 }
 }
