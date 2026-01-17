#include<stdio.h>
#include<conio.h>
 int main(){
 	int i,n, a=1;
 	printf("Nhap n :");
 	scanf("%d",&n);
 	if(n==0){ printf("0");}
	else if(n<0) {printf("Nhap lai");}
 	else if(n%2==0){
 	     	for(int i = 2; i <= n; i += 2){
            a *= i;}
        printf(" %d", a);}
    
	else {
	        for(int i = 1; i <= n; i += 2){
            a *= i; }
        printf("%d",a);}
	
 }
