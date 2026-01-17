#include<stdio.h>
void nhap(int arr[],int n,int i){
	if(i>=n){
		return;
	}
	else{
		printf("arr[%d] : ",i+1);
		scanf("%d",&arr[i]);
		return nhap(arr,n,i+1);
	}
}
int demsochan(int arr[],int n){
	if(n==0){
		return 0;
	}
 else{
		return (arr[n-1]%2==0 ? 1 : 0) + demsochan(arr,n-1);
			
		}
	}
int max(int arr[],int n){
	if(n==1){
		return arr[0];
	}
	else {
	return	arr[0]+max(arr+1,n-1);
	}
}
int trungbinh(int arr[],int n){
	if(n==0){
		return 0;
	}
	else return max(arr,n)/n;
}

int main(){
	int arr[100];
	int n,i;
	scanf("%d",&n);
	nhap(arr,n,i);
	printf("\n%d",demsochan(arr,n));
	printf("\n%d",trungbinh(arr,n));
}
