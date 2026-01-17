#include <stdio.h>
 int main(){
 	char a;
 	printf("Nhap 1 ki tu :");
 	scanf("%c",&a);
 	if(a>64 && a<91){
 		printf("\n Day la chu cai in hoa");}
 	else if(a>96 && a<123){
 		printf("\n Day la chu cai in thuong");}
 	else if(a>47 && a<58){
 		printf("\n Day la chu so");}	
 	else if(a==0 && a<47 || a>57 && a<64 || a>90 && a<97 || a>122 && a<128 ){
 		printf("\n Day la ky tu dat biet");	
	 }
 }
