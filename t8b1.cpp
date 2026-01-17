#include<stdio.h>
#include<conio.h>
 long long int giaithua(int n){
 	int i,a;
 	for(i=1;i<=n;i++){
 	 return n*giaithua(n-1);
}}
 int main(){
	int n,a;
	printf("Nhap n :");
	scanf("%d",&n);
	printf("%d ",giaithua(n));
	return 0;

 }
