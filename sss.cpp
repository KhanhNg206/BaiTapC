#include<stdio.h>
#include<math.h>
#include<string.h>
typedef struct{
	int ngay;
	int thang;
	int nam;
}Date;

typedef struct {
	char masach[19];
	char tensach[1000];
	char tacgia[30];
	char nxb[100];
	Date namxuatban;
}Sach;

void nhaptt1sach(Sach &a){
	fflush(stdin);
	printf("\nNhap ten sach : ");
	gets(a.tensach);
	printf("\nNhap ma sach ( ISBN X-XXX-XXXXX-X ): ");
	gets(a.masach);
	printf("\nNhap ten tac gia : ");
	gets(a.tacgia);
	printf("\nTen nha xuat ban : ");
	gets(a.nxb);
	fflush(stdin);
	printf("\nNhap ngay thang nam nhap sach : ");
	scanf("%d %d %d",&a.namxuatban.ngay,&a.namxuatban.thang,&a.namxuatban.nam);
	fflush(stdin);
	printf("\n-----------------------------------------------\n");
}
void nhapttsach(Sach a[], int n){
	for(int i=0;i<n;i++){
		printf("Nhap thong tin quyen sach thu %d",i+1);
		nhaptt1sach(a[i]);
	}
}
void xuattt1sach(Sach a){
	printf("Ma Sach : %s\n",a.masach);
	printf("Ten Sach : %s\t Ten tac gia : %s\n",a.tensach,a.tacgia);
	printf("Nha xuat ban :%s\t Ngay nhap sach : %d/%d/%d\n",a.nxb,a.namxuatban.ngay,a.namxuatban.thang,a.namxuatban.nam);
	printf("\n-----------------------------------------------\n");
}
void xuatttsach(Sach a[],int n){
	for(int i=0;i<n;i++){
		xuattt1sach(a[i]);
	}
}
void timsach(Sach a[],int n,char b[]){
	int i=0,j=0;
	for( i=0;i<n;i++){
		for(j=0;a[i].masach[j]!='\0'&&b[j]!='\0'&&a[i].masach[j]==b[j];j++){
		}
	if(a[i].masach[j]==b[j]){
		xuattt1sach(a[i]);
	}
	}
}
int main(){
	int n;
	Sach a[100];
	printf("Nhap so loai sach : ");
	scanf("%d",&n);
	fflush(stdin);
	nhapttsach(a,n);
	xuatttsach(a,n);
	char b[19];
	printf("\nNhap ma sach ISBN can tim ( ISBN X-XXX-XXXXX-X ): ");
	gets(b);
	timsach(a,n,b);
	return 0;
}


