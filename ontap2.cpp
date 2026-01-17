#include <stdio.h>
#include <stdlib.h>

void nhapMang(int **mang, int n) {
    
    *mang = (int*)malloc(n * sizeof(int));
    if(*mang == NULL) {
        printf("Loi cap phat bo nho\n");
        exit(0);
    }

    for(int i = 0; i < n; i++) {
        do {
            printf("Nhap phan tu thu %d: ", i + 1);
            scanf("%d", &(*mang)[i]);
        } while((*mang)[i] < 0);
    }
}
int trungbinh(int *mang,int n){
	int tong=0;
	for(int i=0;i<n;i++){
		tong+=mang[i];
	}
	return (float)tong/n;
}
int max(int *mang,int n){
	if(n==1){
		return mang[0];
	}
	else{
		int x=max(mang+1,n-1);
		if(mang[0]>x){
			return mang[0];
		} else return x;
	}
}
int tongbinhphuong(int *mang,int n){
	int tong=0;
	for(int i=0;i<n;i++){
		tong+=mang[i]*mang[i];
	}
	return tong;
}
void lietke(int *mang,int n){
	int x=trungbinh(mang,n);
	for(int i=0;i<n;i++){
	if(mang[i]>x){
		printf("%d ",mang[i]);
	}
}}

void xuat(int *mang,int n,int i){
	if(i>=n){
		return;
	}
	else{
		printf("%d ",mang[i]);
	}
	return xuat(mang,n,i+1);
}

int main() {
    int n,i;
    int *mang;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    nhapMang(&mang, n);
    printf("\nGia tri trung binh = %d",trungbinh(mang,n));
    printf("\nGia tri tong binh phuong = %d",tongbinhphuong(mang,n));
    printf("\nGia tri lon hon gia tri trung binh = "); 
	lietke(mang,n);
	printf("\n");
	xuat(mang,n,i);
	printf("\n Gia tri lon nhat : %d",max(mang,n));
    
}
