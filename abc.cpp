#include <stdio.h>
#include <string.h>

typedef struct {
    char maSV[50];
    char hoTen[50];
} SinhVien;

void nhapSinhVien(SinhVien *sv) {
    printf("Nhap ma sinh vien: ");
    scanf("%s", sv->maSV);
    printf("Nhap ho ten: ");
    scanf("%s", sv->hoTen);
}

void xuatSinhVien(SinhVien sv) {
    printf("Ma sinh vien: %s\n", sv.maSV);
    printf("Ho ten: %s\n", sv.hoTen);
}

void sapXepTheoMa(SinhVien *dsSV, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(dsSV[i].maSV, dsSV[j].maSV) > 0) {
                SinhVien temp = dsSV[i];
                dsSV[i] = dsSV[j];
                dsSV[j] = temp;
            }
        }
    }
}

int main() {
    SinhVien dsSV[100];
    int n = 0;

    // Nhap thong tin cua cac sinh vien
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        nhapSinhVien(&dsSV[i]);
    }

    // Sap xep danh sach sinh vien theo ma
    sapXepTheoMa(dsSV, n);

    // Xuat thong tin cua cac sinh vien
    for (int i = 0; i < n; i++) {
        xuatSinhVien(dsSV[i]);
    }

    return 0;
}

