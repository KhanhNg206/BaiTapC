#include<stdio.h>
int fibo(long long n){
	long long f[100];
	f[0]=0; f[1]=1;
	for(int i=2;i<92;i++){
		f[i]=f[i-1]+f[i-2];
	}
	for(int i=2;i<92;i++){
		if(n==f[i]) return 1;
	}
	return 0 ;
}
int main(){
	int a,b;
	printf("Nhap :\n");
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
	printf("Cac so fibo la : \n");
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			if(fibo(arr[i][j])){
				printf("%d ",arr[i][j]);
			}
		}}
		return 0;
	}

