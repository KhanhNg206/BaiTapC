#include<stdio.h>
#include<stdlib.h>
void nhap(int *arr,int n){
do{
	
	printf("Nhap so luong phan tu : ");
	scanf("%d",&n);
	arr=(float *)malloc(n*sizeof(float));}
	while(n<0);
	for(int i=0;i<n;i++){
		
		printf("Nhap A[%d] : ",i+1);
		scanf("%d",&arr[i]);
	}while(arr[i]<0);}
}
float trungbinh(int arr[],int n){
	int m=0;
	for(int i=0;i<n;i++){
	m +=arr[i];
	}
	return (float)m / n;
}
float tbp(int arr[],int n){
	int ss=0;
	for(int i=0;i<n;i++){
		ss+=arr[i]*arr[i];
	}
	return ss;
}
void lietke(int arr[],int n){
	float tb=trungbinh(arr,n);
	for(int i=0;i<n;i++){
		if(arr[i]>tb){
			printf("cac gia tri lon hon gia tri tb la :");
			printf("%d",arr[i]);
		}
		else printf("\nKhong co gia tri lon hon gia tri tb!");
	}
}
int main(){
	int n;
	int arr[100];
	nhap(arr,n);
	printf("Gia tri trung binh cua mang : %f",trungbinh(arr,n));
	printf("Gia tri tbp cua mang : %d",tbp(arr,n));
	lietke(arr,n);
	
}


