#include<stdio.h>
#include<conio.h>
 int main(){
 	int a,i;
 	float b,t=9;
 	printf("Nhap so luong :");
 	scanf("%d",&a);
 	for(i=1;i<a;i++){
 	t=t*10+9;
 	b+=t;}
  printf("Tong cua day la : %f",b);}
