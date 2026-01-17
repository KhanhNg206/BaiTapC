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
void tong(int a[],int n){
  if(n == 0)
      return 0;
    else
        return a[n - 1] + tong(a, n - 1);
}
int main() {
    int n;
    int a[n];
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    nhap(a, n);
    printf("Mang vua nhap la: ");
    xuat(a, n);
    printf("%d",tong(a,n));
    
    return 0;
}

