#include <stdio.h>


void nhapMang(int n, float a[]) {
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%f", &a[i]);
    }
}

void hienThiMang(int n, float a[]) {
    printf("Cac phan tu trong mang la: ");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", a[i]);
    }
    printf("\n");
}

void thayThe(int n, float a[]) {
    for (int i = 0; i < n; i++) {
        if ((int)a[i] % 2 != 0) {
            a[i] *= 2;
        }
    }
}

void themPhanTu(int n, float a[], float x, int p) {
    for (int i = n - 1; i >= p; i--) {
        a[i + 1] = a[i];
    }
    a[p] = x;
}

int main() {
    int n, p;
    float a[100], x;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    nhapMang(n, a);
    hienThiMang(n, a);
    thayThe(n, a);
    printf("Mang sau khi thay the: ");
    hienThiMang(n, a);
    
    return 0;
}

