#include <stdio.h>

void nhap(int a[],int n) {
    if(n == 0) 
	   return;
    else{
        nhap(a,n - 1);
        printf("Nhap phan tu thu %d: ",n);
        scanf("%d", &a[n - 1]);
    }
}

void xuat(int a[],int n) {
    if(n == 0)
	   return;
	else {
        xuat(a,n - 1);
        printf("%d ",a[n - 1]);
    }
}
int tongpt(int a[],int n){
  if(n == 0)
      return 0;
    else
        return a[n - 1] + tongpt(a, n - 1);
}


int tongchan(int a[],int n){
  if(n == 0)
        return 0;
    else {
        int tong = 0;
        if(a[n - 1] % 2 == 0){
			tong = a[n - 1];
			}
        return tong + tongchan(a, n - 1);
    }
}
int timmax(int a[], int n) {
    if (n == 1)
        return a[0];
    else {
        if (a[n - 1] > timmax(a, n - 1))
            return a[n - 1];
        else
            return timmax(a, n - 1);
    }
}

int timmin(int a[], int n) {
    if (n == 1)
        return a[0];
    else {
        
        if (a[n - 1] <  timmin(a, n - 1))
            return a[n - 1];
        else
            return  timmin(a, n - 1);
    }}
int main() {
    int n;
    int a[n];
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    nhap(a, n);
    printf("Mang vua nhap la: ");
    xuat(a, n);
    printf("\nTong cac phan tu trong mang la : %d",tongpt(a,n));
    printf("\nTong cac phan tu so chan trong mang la : %d",tongchan(a,n));
    printf("\nPhan tu lon nhat trong mang : %d",timmax(a,n));
    printf("\nPhan tu nho nhat trong mang : %d",timmin(a,n));
    return 0;
}

