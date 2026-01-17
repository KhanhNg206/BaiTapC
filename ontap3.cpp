#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
	char code[10];
	char name[30];
	double salary;
}nhanvien;

void nhap(nhanvien &a){
		printf("\nNhap ma so :"); scanf("%s",&a.code); fflush(stdin);
		printf("\nNhap ten :"); gets(a.name); fflush(stdin);
		printf("\nNhap so luong :"); scanf("%lf",&a.salary); fflush(stdin);
	
}
void nhaptt(nhanvien a[],int n){
	for(int i=0;i<n;i++){
		printf("\nNhap tt nhan vien %d",i+1);
		nhap(a[i]);
}}
void xuat(nhanvien &a){
	printf("\nMa : %s",a.code);
	printf("\nTen : %s",a.name);
	printf("\nLuong : %lf",a.salary);
}
void xuattt(nhanvien a[],int n){
	printf("\n\n------THONG TIN NHAN VIEN----------");
	for(int i=0;i<n;i++){
		printf("\nNHAN VIEN %d",i+1);
		xuat(a[i]);
	}
}
void timkiem(nhanvien a[],int n,char code[]){
	int x=0;
	for(int i=0;i<n;i++){
		
		if(strcmp(a[i].code,code)==0){
			printf("\nNhan vien can tim la nhan vien thu %s",a[i].name);
			x=1;
	}}
	if(!x){
		printf("\nKhong tim thay");
	}
}
void xoa(nhanvien a[],int *n,char code[]){
	int i;
	for( i=0;i<*n;i++){
		if(strcmp(a[i].code,code)==0){
			break;
		}
	}
		if(i<*n){
	for(int  j=i;j<*n-1;j++){
		a[j]=a[j-1];}
		(*n)--;
		printf("\nDa xoa tt nhan vien");
	
}else printf("\nKhong tim thay!");
}
void timten(nhanvien a[],int n,char name[]){
	for(int i=0;i<n;i++){
		if(strcmp(a[i].name,name)==0){
			xuat(a[i]);
		}
	}
}
void xuatTenLuongCaoNhat(nhanvien a[], int n) {
    double maxSalary = 0;
    char maxSalaryName[30];

    // Tìm m?c luong cao nh?t
    for (int i = 0; i < n; ++i) {
        if (a[i].salary > maxSalary) {
            maxSalary = a[i].salary;
            strcpy(maxSalaryName, a[i].name);
        }
    }

    printf("\n\nNhan vien co luong cao nhat la: %s", maxSalaryName);
}

int main(){
	int n;
	nhanvien a[100];

	printf("Nhap so luong nhan vien : ");
	scanf("%d",&n);
	nhaptt(a,n);
	xuattt(a,n);
	char code[10];
	do{
	int choice;
	printf("\nMenu:\n");
	printf("0. Ket thuc chuong trinh\n");
    printf("1. tim kiem nhan vien\n");
    printf("2. xoa nhan vien\n");
    printf("3. xuat tt nhan vien\n");
    printf("4. tim ten nv co luong cao nhat\n");
    printf("Nhap lua chon : ");
    scanf("%d", &choice);
    char name[30];
    switch(choice) {
    	case 0:
    		printf("\nKet thuc chuong trinh");
    		break;
        case 1:
        	printf("\nNhap ma so nhan vien can tiem :");
        	scanf("%s",code);
            timkiem(a,n,code);	
            break;
        case 2:
        	printf("\nNhap ma so nhan vien can xoa :");
        	scanf("%s",code);
           	xoa(a,&n,code);
            break;
        case 3:
        	printf("\nNhap ten nhan vien xuat tt :");
        	scanf("%s",name);
        	timten(a,n,name);
        	break;
        case 4:
        	 xuatTenLuongCaoNhat(a, n);
            break;
        default:
            printf("Lua chon khong hop le!\n");
    }
      printf("\nNhan Enter de quay lai menu, hoac nhap ky tu bat ki de ket thuc chuong trinh: ");
        while (getchar() != '\n'); 
    } while (getchar() == '\n');

    return 0;
}
