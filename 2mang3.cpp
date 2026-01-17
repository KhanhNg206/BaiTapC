#include<stdio.h>
int main(){
	int a,b;
	printf("Nhap so hang a va so cot b : \n");
	scanf("%d%d",&a,&b);
	int arr[a][b];
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			printf("Nhap gia tri o hang %d , cot %d :",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	for(int i=0;i<a;i++){
		int tong=0;
		for(int j=0;j<b;j++){
	tong+=arr[i][j];}
	printf("\n tong hang thu %d : %d ",i,tong);}
	for(int i=0;i<a;i++){
		int tong=0;
		for(int j=0;j<b;j++){
			
		
	tong+=arr[j][i];}
	printf("\n tong cot thu %d : %d ",i,tong);}
	return 0;
}
