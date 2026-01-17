#include<stdio.h>
void nhap(int arr[],int n){
	for(int i=0 ; i<n;i++){
		scanf("%d",&arr[i]);
	}
}
void xuatcucdai(int arr[],int n){
	int count=0;
	for(int i=0;i<n;i++){
		if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
		printf("%d",arr[i]);
		}
	}
	
}
int main(){
	int arr[100];
	int n=5;
	nhap(arr,n);
	xuatcucdai(arr,n);
}
