#include<stdio.h>
void nhap(int arr[],int n,int i){
	if(i>=n){
		return;
	}
	else{
		printf("Nhap phan tu thu %d :",i+1);
		scanf("%d",&arr[i]);
		return nhap(arr,n,i+1);
}
}
void xuat(int arr[],int n,int i){
	if(i>=n){
		return;
	}
	else{
		printf("%d ",arr[i]);
		return xuat(arr,n,i+1);
	}
}
void sapxep(int arr[],int n){
	if(n<=1){
		return;
	}
	else{
		int temp;
		for(int i=0;i<n-1;i++){
			if(arr[i]<arr[i+1]){
			
			temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
	}}
	sapxep(arr,n-1);
}
int tong(int arr[],int n){
	if(n==1){
		return arr[0];
	}
	else{
		return arr[0]+tong(arr+1,n-1);
	}
}
int max(int arr[],int n){
	if(n==1){
		return arr[0];
	}
	else{
		int x=max(arr+1,n-1);
		if(arr[0]>x)
		return arr[0];			
		else return x;
	}
}
int min(int arr[],int n){
	if(n==1){
		return arr[0];
	}
	else{
		int x=min(arr+1,n-1);
		if(arr[0]<x)
		return arr[0];			
		else return x;
	}
}
void belon(int arr[],int n){
	if(n<=1){
		return;
	}
	else{	
		for(int i=0;i<n-1;i++){
				if(arr[i]>arr[i+1]){
			int temp = arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
	}}
	belon(arr,n-1);
}
int tongchan(int arr[],int n){
	if(n==0){
		return 0;
	}
	else{
		int x=tongchan(arr+1,n-1);
		if(arr[0]%2==0) return arr[0]+x;
		else return x;
	}
}
int tongle(int arr[], int n) {
    if (n == 0) {
        return 0;
    } else {
    	int x=tongle(arr + 1, n - 1);
        if (arr[0] % 2 != 0) {
            return arr[0] + x;
        } else {
            return x;
        }
    }
}
int main(){
	int arr[100],n,i;
	printf("Nhap so luong phan tu :");
	scanf("%d",&n);
	nhap(arr,n,i);
	xuat(arr,n,i);
	printf("\nTong : %d",tong(arr,n));
	printf("\nTong chan : %d",tongchan(arr,n));
	printf("\nTong le : %d",tongle(arr,n));
	sapxep(arr,n);
	printf("\nMang sau khi sap xep :");
	xuat(arr,n,i);
	printf("\nmax : %d",max(arr,n));
	printf("\nmin : %d",min(arr,n));
	printf("\nMang sau khi sap sep tu be toi lon :");
	belon(arr,n); xuat(arr,n,i);
}


