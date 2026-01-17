#include<stdio.h>
#include<string.h>
#define max 100
struct time{
	char ngay;
	char thang;
	char nam;
	char noimang;
	char ngoaimang;
};
typedef struct thuebao{
	char ma[10];
	char hoten[50];
	char sdt[15];
	time thoigian;
	int loaitb;
	time goi;
}tb;
void nhap(tb &a){

printf("\nNhap ma :"); scanf("%s",&a.ma); fflush(stdin);
printf("Nhap ho ten :"); gets(a.hoten); fflush(stdin);
printf("Nhap ngay dang ki(dd/mm/yy) : "); scanf("%d %d %d",&a.thoigian.ngay,&a.thoigian.thang,&a.thoigian.nam);
fflush(stdin);
printf("Nhap so dien thoai :"); gets(a.sdt); fflush(stdin);
printf("Nhap loai thue bao (TS / TT) :"); scanf("%d",&a.loaitb); fflush(stdin);
printf("Nhap thoi gian goi noi mang :"); scanf("%d",&a.goi.noimang); fflush(stdin);
printf("Nhap thoi gian goi ngoai mang :"); scanf("%d",&a.goi.ngoaimang);
}
tb TB[max];
int sltb = 0;

void xuat(tb a){
  printf("Ma: %s \t Ho ten: %s \n",a.ma,a.hoten);
  printf("Ngày dk: %d/%d/%d \t sdt: %s \n",a.thoigian.ngay,a.thoigian.thang,a.thoigian.nam,a.sdt);
  printf("Loai tb: %d \n",a.loaitb);
  printf("Thoi gian goi noi mang va ngoai mang : %d va %d",a.goi.noimang,a.goi.ngoaimang);

}
void nhapsltb(tb a[],int n){
	for(int i=0;i<n;i++){
	printf("\nNhap thue bao thu %d",i+1);
		nhap(a[i]);	
}}
void xuattb(tb a[],int n){
	for(int i=0;i<n;i++){
		printf("\n");
		printf("\n----THUE BAO THU %d----\n",i+1);
		xuat(a[i]);
	}
}
void themtb(tb a[],int *n,int m){
	printf("\n-----------------------\n");
	printf("Nhap so luong tb can them : "); scanf("%d",&m);
	 fflush(stdin);
	for(int i=*n;i<*n+m;i++){
		
	    nhap(a[i]);
}       *n+=m;
}
void sapxep(tb *a,int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(strcmp(a[i].ma,a[j].ma)>0){
				tb temp = a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}


//void timkiem(tb a[], int n, char sdt[]){
//   int found = 0;
//    for(int i=0; i<n; i++){
//      if(strcmp(a[i].sdt, sdt) == 0){
//        printf("Chu thue bao co so dien thoai %s la: %s\n", sdt, a[i].hoten);
//      found = 1;
//}}
//    if(!found){
//        printf("Khong tim thay thue bao voi so dien thoai %s\n", sdt);
//    }}

void timkiem(tb a[], int n, char hoten[]){
    int found = 0;
    for(int i=0; i<n; i++){
        if(strcmp(a[i].hoten, hoten) == 0){
            printf("Chu thue bao co ten %s co ma so : %s\n", hoten, a[i].ma);
            found = 1;
        }
    }
    if(!found){
        printf("Khong tim thay thue bao voi hoten %s\n", hoten);
    }
}
void tinhcuoc(tb a){
    int cuocphi;
    cuocphi = a.goi.noimang * 1500 + a.goi.ngoaimang * 3000;
    
    printf("Cuoc phi cua thue bao %s la: %d\n", a.hoten, cuocphi);
    
}
void xoathuebao(tb a[], int *n, char ma[]){
    int i;
    for(i=0; i<*n; i++){
        if(strcmp(a[i].ma, ma) == 0){
            break;
        }
    }
    if(i<*n){
        for(int j=i; j<*n-1; j++){
            a[j] = a[j+1];
        }
        (*n)--;
        printf("Da xoa thue bao co ma %s\n", ma);
    }else{
        printf("Khong tim thay thue bao co ma %s\n", ma);
    }
}


int main(){
	tb a[100];
	int n;
	printf("Nhap so luong thue bao :");
	scanf("%d",&n);
	nhapsltb(a,n);
	xuattb(a,n);
	int m;
	themtb(a,&n,m);
	xuattb(a,n);
	printf("\n");
	printf("\n----Thue bao sau khi sap xep theo ma----\n");
	sapxep(a,n);
	xuattb(a,n);
	fflush(stdin);
     char hoten[50];
    printf("\nNhap ten chu thue bao can tim: ");
    gets(hoten);
     printf("\n-------------\n");
    timkiem(a, n, hoten);
    printf("\n-------------\n");
    for(int i=0; i<n; i++){
    tinhcuoc(a[i]);  }
     printf("\n-------------\n");
    char ma[10];
    printf("Nhap ma thue bao can xoa: ");
    scanf("%s", ma);
    xoathuebao(a, &n, ma);
    printf("\n----Danh sach thue bao sau khi xoa----\n");
    xuattb(a,n);
	return 0;
}
