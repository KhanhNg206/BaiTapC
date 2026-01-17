#include<stdio.h>
int main(){
	float kv;
	char khuvuc;
    printf("Nhap : ");
    scanf("%c",&khuvuc);
    if(khuvuc='A'){
      kv=2;}
    else if(khuvuc='B'){
    	kv=1;}
    else if(khuvuc='C'){
    	kv=0.5;}
    else if(khuvuc='X'){
    	kv=0;}
    printf("%.1f",kv);
	}
	

