#include<stdio.h>
void nhapn(int arr[],int n){
	printf("\nNhap cac phan tu cua mang n :\n");
	for(int i=0;i<n;i++){
	do{
		printf("n[%d] =",i+1);
		scanf("%d",&arr[i]);
	}while(arr[i]<1 ) ;
	
}
}
void nhapm(int arr[],int m){
	printf("\nNhap cac phan tu cua mang m :\n");
	for(int i=0;i<m;i++){
	do{
		printf("m[%d] =",i+1);
		scanf("%d",&arr[i]);
	}while(arr[i]<1);}
}
int tichn(int arr[],int n){
	if(n==0){
		return 0;
	}
	else{
		int x=tichn(arr+1,n-1);
		if(arr[0]%2==0){
			return arr[0]*x;}
			else return x;
		}
	}
int tichm(int arr[],int m){
	if(m==0){
		return 0;
	}
	else{
		int x=tichm(arr+1,m-1);
		if(arr[0]%2==0){
			return arr[0]*x;}
			else return x;
		}
	}
int main(){
	int n,m;
	int arr[100];
	printf("\nNhap so luong cua mang n va m :\n");
	scanf("%d%d",&n,&m);
	nhapn(arr,n);
	nhapm(arr,m);
	printf("\n%d",tichn(arr,n));
	printf("\n%d",tichm(arr,m));
	printf("\n%d",tichn(arr,n)*tichm(arr,m));
}
