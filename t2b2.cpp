#include <math.h>
#include <conio.h>
#include <stdio.h>
int main(){
	int x,S;
	printf("\Nhap so nguyen x :");
	scanf("%d",&x);
	S=x^2/1+(x^2%1+(x^2%1+x^2));
	printf("\gia tri bieu thuc la : %c",S);
} 
