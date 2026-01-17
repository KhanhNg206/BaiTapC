#include<stdio.h>
#include<stdlib.h>
void nhapdiem(float *diem,int n){
	float *A;
	A=(float *)malloc(n*sizeof(float));
	for(int i=0;i<n;i++){
		do{
		printf("Nhap diem sinh vien thu %d : ",i+1);
		scanf("%f",&diem[i]);
		}
		while(diem[i]<0 );
		
	}
}
int main(){
	int n;
	int *A;
	nhapdiem(A,n);
}
