#include <stdio.h>
#include <string.h>

typedef struct {
    int ngay;
    int thang;
    int nam;
} Ngay;

typedef struct {
    char maSV[10];
    char hoTen[50];
    char gioiTinh;
    Ngay ngaySinh;
    char lop[7];
    float diemTB;
} SinhVien;

SinhVien sinhVien[100];
int n = 0;

void nhap(SinhVien *sv) {
    printf("Nhap ma sv: ");
    scanf("%s", sv->maSV);

    printf("Nhap ho va ten: ");
    scanf(" %[^\n]s", sv->hoTen); 

    printf("Nhap gioi tinh (x: nu, y: nam): ");
    scanf(" %c", &sv->gioiTinh);

    printf("Nhap ngay sinh (aa/mm/nn): ");
    scanf("%d %d %d", &sv->ngaySinh.ngay, &sv->ngaySinh.thang, &sv->ngaySinh.nam);

    printf("Nhap lop: ");
    scanf("%s", sv->lop);

    printf("Nhap diem trung binh: ");
    scanf("%f", &sv->diemTB);

}

void xuat(SinhVien sv) {
    printf("Ma sinh vien: %s\n", sv.maSV);
    printf("Ho ten: %s\n", sv.hoTen);
    printf("Gioi tinh: %c\n", sv.gioiTinh);
    printf("Ngay sinh: %d/%d/%d\n", sv.ngaySinh.ngay, sv.ngaySinh.thang, sv.ngaySinh.nam);
    printf("Lop: %s\n", sv.lop);
    printf("Diem trung binh: %.2f\n", sv.diemTB);
}

void nhapDanhSach() {
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Nhap sinh vien thu %d:\n", i + 1);
        nhap(&sinhVien[i]);
    }
}

void xuatDanhSach() {
    for (int i = 0; i < n; i++) {
        printf("Thong tin sinh vien thu %d:\n", i + 1);
        xuat(sinhVien[i]);
    }
}

void xuatSinhVienCoDiemTBHon5() {
    for (int i = 0; i < n; i++) {
        if (sinhVien[i].diemTB > 5) {
            xuat(sinhVien[i]);
        }
    }
}

void xuatSinhVienNganhCNTT() {
    for (int i = 0; i < n; i++) {
        if (strncmp(sinhVien[i].lop + 3, "CNTT", 4) == 0) {
            xuat(sinhVien[i]);
        }
    }
}

int demSoLuongSinhVienNu() {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (sinhVien[i].gioiTinh == 'x') {
            count++;
        }
    }
    return count;
}

void xuatSinhVienCoDiemTBCaoNhat() {
    float max = sinhVien[0].diemTB;
    for (int i = 1; i < n; i++) {
        if (sinhVien[i].diemTB > max) {
            max = sinhVien[i].diemTB;
        }
    }
    for (int i = 0; i < n; i++) {
        if (sinhVien[i].diemTB == max) {
            xuat(sinhVien[i]);
        }
    }
}

void themSinhVien() {
    nhap(&sinhVien[n]);
    n++;
}

void xoaSinhVien(char *maSV) {
    int i;
    printf("\nNhap ma sinh vien can xoa: ");
    scanf("%s",maSV);
    for (i = 0; i < n; i++) {
        if (strcmp(sinhVien[i].maSV, maSV) == 0) {
            break;
        }
    }
    if (i < n) {
        for (int j = i; j < n - 1; j++) {
            sinhVien[j] = sinhVien[j + 1];
        }
        n--;
    }
}

void sapXepTheoDiemTB() {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (sinhVien[i].diemTB > sinhVien[j].diemTB) {
                SinhVien temp = sinhVien[i];
                sinhVien[i] = sinhVien[j];
                sinhVien[j] = temp;
            }
        }
    }
}

int main() {
	char *maSV;
    nhapDanhSach();
    xuatDanhSach();
    printf("\nSinh vien co diem TB > 5:\n");
    xuatSinhVienCoDiemTBHon5();
    printf("\nSinh vien nganh CNTT:\n");
    xuatSinhVienNganhCNTT();
    printf("\nSo luong sinh vien nu: %d\n", demSoLuongSinhVienNu());
    printf("\nSinh vien co diem TB cao nhat:\n");
    xuatSinhVienCoDiemTBCaoNhat();
    printf("\nThem sinh vien:\n");
    themSinhVien();
    printf("\nDanh sach sau khi them:\n");
    xuatDanhSach();
    
    xoaSinhVien(maSV);
    printf("\nDanh sach sau khi xoa:\n");
    xuatDanhSach();
    printf("\nDanh sach sau khi sap xep theo diem TB:\n");
    sapXepTheoDiemTB();
    xuatDanhSach();
    return 0;
}

