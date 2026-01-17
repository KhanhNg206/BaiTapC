#include <stdio.h>
void nhap(int arr[],int n,int i){
	if(i>=n){
		return;
	}
	else{
		printf("Arr[%d] : ",i+1);
		scanf("%d",&arr[i]);
		return nhap(arr,n,i+1);
	}
}
void xuat(int arr[],int n,int i){
	if(i>=n){
		return;
	}
	else{
		printf("\n%d ",arr[i]);
		return xuat(arr,n,i+1);
	}
}

int Max(int arr[],int n){
	if(n==1){
		return arr[0];
	}
	else{
		int x=Max(arr+1,n-1);
		if(arr[0]>x)
			 return arr[0];
		else return x;
	}
}
int doixung(int arr[], int i, int n) {
    if (i >= n)
        return 1;
    else {
       int x=doixung(arr, i + 1, n - 1);
        if (arr[i] == arr[n])
            return x;
        else
            return 0;
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
int tong(int arr[],int n){
	if(n==1){
		return arr[0];
	}
	else
	return arr[0]+tong(arr+1,n-1);
}
int tongchan(int arr[],int n){
	if(n==0){
		return 0;
	}
	else{
		int x=tongchan(arr+1,n-1);
		if(arr[0]%2==0){
			return arr[0]+x;}
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
int nhan(int arr[],int n){
	if(n==0){
		return 1;
	}
	else return arr[0]*nhan(arr+1,n-1);
}
void sapXep(int arr[], int n) {
    if (n <= 1)
        return;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    sapXep(arr, n - 1);
}
int timkiem(int arr[], int key, int n) {
    if (n == 0) {
        return -1; // Tru?ng h?p co s?: n?u m?ng r?ng, tr? v? -1.
    }
    if (arr[0] == key) {
        return 0; // N?u ph?n t? d?u tiên c?a m?ng là ph?n t? c?n tìm, tr? v? v? trí 0.
    } else {
        int index = timkiem(arr + 1, key, n - 1); // G?i d? quy trên m?ng con b? qua ph?n t? d?u tiên.
        if (index == -1) {
            return -1; // N?u không tìm th?y trong m?ng con, tr? v? -1.
        } else {
            return index + 1; // N?u tìm th?y trong m?ng con, tr? v? v? trí tìm th?y c?ng thêm 1.
        }
    }
}
int main() {
    int n;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
   int arr[100];
   nhap(arr,n,0);
   printf("cac phan tu trong mang la :");
   xuat(arr,n,0);
    printf("\nGia tri lon nhat trong mang la: %d\n", Max(arr, n));
     printf("Gia tri nho nhat trong mang la: %d\n", min(arr, n));
     if (doixung(arr, 0, n - 1))
        printf("Mang doi xung\n");
    else
        printf("Mang khong doi xung\n");
    
    printf("Tong cac phan tu trong mang la : %d",tong(arr,n));
    printf("\nTong chan cac phan tu trong mang la : %d",tongchan(arr,n));
    printf("\nTong le cac phan tu trong mang la : %d",tongle(arr,n));
    printf("\nTich cac phan tu trong mang la : %d",nhan(arr,n));
    
         //sapxep 
    sapXep(arr, n);
    printf("\nCac phan tu trong mang sau khi sap xep la:");
    xuat(arr, n, 0);
    
    //tiem kiem vi tri 
    int key;
printf("Nhap phan tu can tim: ");
scanf("%d", &key);
int result = timkiem(arr, key, n);
if (result == -1) {
    printf("Phan tu %d khong co trong mang.\n", key);
} else {
    printf("Phan tu %d co trong mang tai vi tri %d.\n", key, result);
}
    return 0;
}

