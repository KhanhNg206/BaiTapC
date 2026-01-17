#include<stdio.h>
#include<conio.h>
 int main(){
 	int a,i;
 	float b;
 	printf("Nhap so can tinh uoc so :");
 	scanf("%d",&a);
 	for(i=1;i<=a;i++){
 		if(a%i==0){
 		printf("%d \n",i);}
	 }
 }
