#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
	char ma[10];
	char loai[20];
	float dongia;
	float soluong;
}Hedgehog;

void nhap(Hedgehog &HedArr){
	printf("\nNhap ma nhim :"); scanf("%s",&HedArr.ma); fflush(stdin);
	printf("\nNhap loai nhim :"); scanf("%s",&HedArr.loai); fflush(stdin);
	printf("\nNhap don gia :"); scanf("%f",&HedArr.dongia); fflush(stdin);
	printf("\nNhap so luong :"); scanf("%f",&HedArr.soluong); fflush(stdin);
}
void nhapsl(Hedgehog HedArr[],int n){
	do{
	printf("Nhap so luong nhim  :");
	scanf("%d",&n);}while(n<=0 || n>10);
	for(int i=0;i<n;i++){
		printf("\n---Nhap nhim %d---\n",i+1);
		nhap(HedArr[i]);
	}
}
void timTenNhimDongiaCaoNhat(Hedgehog HedArr[], int n) {
    float maxPrice = 0;
    char maxPriceLoai[20];

    // Tìm don giá cao nh?t
    for (int i = 0; i < n; ++i) {
        if (HedArr[i].dongia > maxPrice) {
            maxPrice = HedArr[i].dongia;
            strcpy(maxPriceLoai, HedArr[i].loai);
        }
    }

    printf("\n\nTen nhim co don gia cao nhat la: %s", maxPriceLoai);
}
	
int main(){
	Hedgehog HedArr[100];
	int n;
	nhapsl(HedArr,n);
	timTenNhimDongiaCaoNhat(HedArr, n);
}
