#include<stdio.h>
void nhap(int arr[],int n){
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
}
//int tim(int arr[],int n){
//	for(int i=0;i<n;i++){
//		if(arr[i]<0){
//			arr[i]*=0;
//		}
//		printf("\n mmm %d",arr[i]);
//	}
//	
//}
int tim(int arr[],int n,int i){
	if(i>=n){
		return 0;
	}
	else{
		if(arr[i]<0){
			arr[i]*=0;
		
		}
			printf("\nmmm %d",arr[i]);
			return tim(arr,n-1,i+1);
	}
}
int main(){
	int n,i;
	int arr[100];
	scanf("%d",&n);
	nhap(arr,n);
	tim(arr,n,i);
}
