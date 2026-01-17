#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char maSo[10];
    char hoTen[50];
    float diemGK;
    float diemTH;
    float diemLT;
    float diemTK;
} SinhVien;

void tinhDiemTK(SinhVien* sv) {
    sv->diemTK = sv->diemGK * 0.1 + sv->diemTH * 0.3 + sv->diemLT * 0.6;
}

void xuatThongTin(SinhVien* sv) {
    printf("Ma so: %s\n", sv->maSo);
    printf("Ho ten: %s\n", sv->hoTen);
    printf("Diem giua ky: %.2f\n", sv->diemGK);
    printf("Diem thuc hanh: %.2f\n", sv->diemTH);
    printf("Diem ly thuyet: %.2f\n", sv->diemLT);
    printf("Diem tong ket: %.2f\n", sv->diemTK);
}

int main() {
    SinhVien* sv = (SinhVien*)malloc(sizeof(SinhVien));
    // Nhap thong tin sinh vien o day
    // ...
    tinhDiemTK(sv);
    xuatThongTin(sv);
    free(sv);
    return 0;
}

