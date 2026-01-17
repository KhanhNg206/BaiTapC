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

float trungbinh(int *mang, int n) {
    int tong = 0; // Kh?i t?o t?ng
    for(int i = 0; i < n; i++) {
        tong += mang[i];
    }
    return (float)tong / n;
}
float tbp(int *mang, int n) {
    int tong = 0; // Kh?i t?o t?ng
    for(int i = 0; i < n; i++) {
        tong += mang[i]*mang[i];
    }
    return tong;
}
void lietke(int *mang,int n){
	float tb = trungbinh(mang,n);
	for(int i=0;i<n;i++){
		if(mang[i]>tb){
			printf("%d ",mang[i]);
		}
	}
}

int main() {
    int n;
    int *mang;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    nhapMang(&mang, n);
    float tb = trungbinh(mang, n);
    printf("Trung binh cua cac phan tu: %f", tb);
    float bp = tbp(mang,n);
    printf("\nTbp cua cac phan tu: %f\n", bp);
    lietke(mang,n);
    free(mang);
    return 0;
}

