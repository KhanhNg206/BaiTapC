#include <stdio.h>
 int main(){
 	int a,b,c;
 	printf("Nhap vao ba canh a ,b ,c:\n");
 	scanf("%d%d%d",&a,&b,&c);
 	if(a+b>c || a+c>b || b+c>a){
 		printf("\nKhong tao thanh duoc tam giac");
	 }
 	else if(a==b&&b==c&&c==a){
 		printf("\nDay la tam giac deu");}
 	else if(a<b&&a<c||a<b&&a>c||a>b&&a<c||b<a&&b<c||b>a&&b<c||b<a&&b>c||c<a&&c<b||c<a&&c>b||c>a&&c<b){
 		printf("\nDay la tam giac thuong");}
 	else if(a==b && a<c||a==b&&a>c||b==a&&b>c||b==a&&b<c||c==a&&c<b||c==a&&c>b||c==b&&c<a||c==b&&c>a) {
 		printf("\nDay la tam giac can");}
 }
