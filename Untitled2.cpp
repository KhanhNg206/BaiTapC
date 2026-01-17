#include <math.h>
#include <conio.h>
#include <stdio.h>
int main(){
	int x,y,z,t,S;
	printf("\Nhap so nguyen x :");
	scanf("%d",&x);
	y=x*x;
	z=1+(y/(1+y));
	t=1+(y/z);
	S=y/t;
	printf("\gia tri bieu thuc la : %d",S);
} 
