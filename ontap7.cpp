#include<stdio.h>
void nhap(int arr[],int n,int i){
	if(i>=n){
		return;
	}
	else{
		do{
		printf("arr[%d] :",i+1);
		scanf("%d",&arr[i]);
		return nhap(arr,n,i+1);
		}while(arr[i]<1);
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
int max(int arr[],int n){
    if(n==1){
    	return arr[0];
	}
	else{
		int x=max(arr+1,n-1);
		if(arr[0]>x){
			return arr[0];}
			else {
			return x;}
		}
	}
int doixung(int arr[],int n,int i){
	if(i>=n){
		return 1;
	}
	else{
		int x=doixung(arr,n-1,i+1);
		if(arr[n]==arr[i]){
			return x;
		}
		else return 0;
	}
}
int tong(int arr[],int n){
	if(n==1){
		return arr[0];
	}
	else{
	return arr[0]+tong(arr+1,n-1);
	}
}
void sapxep(int arr[],int n){
	if(n<=1){
	return ;
	}
	else{
		for(int i=0;i<n-1;i++){
			if(arr[i]>arr[i+1]){
			
			int temp = arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}}
	}
	sapxep(arr,n-1);
}
bool timkiem(int arr[],int key,int n){
	if(n==0){
		return false;
	}
	if(arr[0]==key){
		return true;
	}
	return timkiem(arr+1,key,n-1);
}
int main(){
	int arr[100];
	int n,i;
	printf("Nhap so luong :");
	scanf("%d",&n);
	nhap(arr,n,i);
	xuat(arr,n,i);
	printf("\nMax : %d",max(arr,n));
	if(doixung(arr,n-1,0)){
		printf("\nMang doi xung");
	}else printf("\nMang khong doi xung");
	printf("\nTong : %d\n",tong(arr,n));
	sapxep(arr,n);
	xuat(arr,n,0);
	int key;
	printf("\nNhap phan tu can tim :");
	scanf("%d",&key);
	if (timkiem(arr, key, n)) {
        printf("Phan tu %d co trong mang.\n", key);
    } else {
        printf("Phan tu %d khong co trong mang.\n", key);
    }
}

