#include<stdio.h>
#include<string.h>

typedef struct {
	int ngay;
	int thang;
	int nam;
}DATE;
typedef struct {
	int ma;
	char tennguoigui[30];
	char tennguoinhan[30];
	int trongluong;
	DATE ngaygui;
	char noidung[30];
	int dongia;
}BK;

void tt1buukien(BK &x){
	printf("\n-----------------\n");
	fflush(stdin);
	printf("Ma buu kien la :"); scanf("%d",&x.ma);
	fflush(stdin);
	printf("Ten nguoi gui buu kien :"); gets(x.tennguoigui);
	printf("Ten nguoi nhan buu kien :"); gets(x.tennguoinhan);
	printf("Trong luong vat pham (kg) :"); scanf("%d",&x.trongluong);
	printf("Ngay gui vat pham (dd/mm/yyyy):"); scanf("%d %d %d",&x.ngaygui.ngay,&x.ngaygui.thang,&x.ngaygui.nam);
	fflush(stdin);
	printf("Nhap noi dung buu kien :"); gets(x.noidung);
	printf("Nhap don gia :"); scanf("%d",&x.dongia);
}
void nhapttbk(BK a[],int n){
		for(int i=0;i<n;i++){
		tt1buukien(a[i]);
	}
}
void xuat1buukien(BK x){
	printf("\n-----------------\n");
	printf("Ma buu kien : %d\n",x.ma);
	printf("Ten nguoi gui buu kien : %s\n",x.tennguoigui);
	printf("Ten nguoi nhan buu kien : %s\n",x.tennguoinhan);
	printf("Trong luong vat pham la %d (kg)\n",x.trongluong);
	printf("Ngay gui vat pham : %d/%d/%d\n",x.ngaygui.ngay,x.ngaygui.thang,x.ngaygui.nam);
	printf("Noi dung buu kien la : %s\n",x.noidung);
	printf("Don gia buu kien la : %d\n",x.dongia);
}
void xuatbuukien(BK a[],int n){
	for(int i=0;i<n;i++){
		xuat1buukien(a[i]);
	}
}
void thembuukien(BK a[],int *n, int m){
	if(*n<100){
		for(int i=*n;i<*n+m;i++){
		tt1buukien(a[i]);
		}
	*n=*n+m;
	}
}
void swap(BK *a,BK *b){
	BK temp=*a;
	*a=*b;
	*b=temp;
}
void BubbleSort(BK *a,int b)
{
	for(int i=0;i<b-1;i++){
		for(int j=b-1;j>i;j--){
			if(a[j].ma<a[j-1].ma){
				swap(&a[j],&a[j-1]);
			}
		}
	}
	xuatbuukien(a,b);
}
void giatri(BK *a,int b){
	for(int i=0;i<b;i++){
		printf("\nGia tri cua buu kien %d la : %d",i+1,a[i].dongia*a[i].trongluong);
	}
}
int khoiluong(BK *a,int n){
	int max=0;
	for(int i=0;i<n;i++){
		if(a[i].trongluong>max){
			max=a[i].trongluong;
		}
		else if(a[i+1].trongluong>a[i].trongluong){
			max = a[i+1].trongluong;
		}
	}
	return max;
}

int main(){
	BK a[100];
	int b,m;
	printf("Nhap so luong buu kien (toi da 100):");
	scanf("%d",&b);
	nhapttbk(a,b);
	printf("\n \n");
	printf("Nhap so luong buu kien can them (0 < m < 100) :");
	scanf("%d",&m);
	thembuukien(a,&b,m);
	printf("\n \n");
	BubbleSort(a,b);
	giatri(a,b);
	printf("\nBuu kien co khoi luong lon nhat la %d (kg)",khoiluong(a,b));
	return 0;
}
