#include<stdio.h>
#include<conio.h>
 int main(){
 	int a,i,t=9;
 	float b;
 	printf("Nhap so luong :");
 	scanf("%d",&a);
 	for(i=1;i<a;i++){
 	t=t*10+9;
 	b=t+t;
	 printf("%f ",b);
 }}
