#include<stdio.h>
void nhap(int arr[],int n,int i){
	if(i>=n){
		return;
	}
	else{
		printf("Nhap cac phan tu cua mang : ");
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
		for(int i=0;i<n-1;i++){
			if(arr[i]>arr[i+1]){
			int temp =arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}}
	}
	return sapxep(arr,n-1);
}
int timkiem(int arr[],int key,int n){
	if(n==0){
		return -1;
	}
	if(key==arr[0]){
		return 0;
	}
	else{
		int x=timkiem(arr+1,key,n-1);
		if(x==-1)
		return -1;
		else return x+1;
	}
}
int tong(int arr[],int n){
	if(n==1){
		return arr[0];
	}
	else
	return arr[0]+tong(arr+1,n-1);
}

int tongle(int arr[],int n){
	if(n==0){
		return 0;
	}
	else{
		int x=tongle(arr+1,n-1);
		if(arr[0] % 2!=0){
			return arr[0]+x;
		}
		else {
		return x;
	}
	}
}
int nhan(int arr[],int n){
	if(n==1){
		return arr[0];
	}
	else return arr[0]*nhan(arr+1,n-1);
}
int doixung(int arr[],int n,int i){
	if(i>=n){
		return 1;
	}
	else {
		int x=doixung(arr,n-1,i+1);
		if(arr[i]=arr[n]){
			return x;
		} else return 0;
	}
}
int main(){
	int i,n,arr[100];
	printf("Nhap so luong phan tu :");
	scanf("%d",&n);
	nhap(arr,n,i);
	xuat(arr,n,i);
	printf("\nMang sau khi sap xep :");
	sapxep(arr,n);
	xuat(arr,n,i);
	
	int key;
	printf("\nNhap phan tu can tim :");
	scanf("%d",&key);
	printf("phan tu can tim o vi tri thu %d",timkiem(arr,key,n));
	
	//tinhtoan
	printf("\nTong : %d",tong(arr,n));
	printf("\nTong le : %d",tongle(arr,n));
	printf("\nTich : %d",nhan(arr,n));
	
	//doixung
	 if (doixung(arr, 0, n - 1))
        printf("Mang doi xung\n");
    else
        printf("Mang khong doi xung\n");
}

