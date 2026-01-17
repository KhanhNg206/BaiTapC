#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct{
	char maso[10];
	char ten[50];
	float luong;
	float tuoi;
}congty;

void nhap(congty &a){
 printf("\nMa so :"); scanf("%s",&a.maso); fflush(stdin);
 printf("\nTen :"); gets(a.ten); fflush(stdin);
 printf("\nLuong :"); scanf("%f",&a.luong); fflush(stdin);
 printf("\nTuoi :"); scanf("%f",&a.tuoi); fflush(stdin);
}
void nhapsl(congty a[],int n){
	for(int i=0;i<n;i++){
		printf("\n---THONG TIN NHAN VIEN %d---",i+1);
		nhap(a[i]);
	}
}
void xuat(congty &a){
	printf("\nMa so : %s",a.maso);
	printf("\nTen : %s",a.ten);
	printf("\nLuong : %f",a.luong);
	printf("\nTuoi : %f",a.tuoi);
}
void xuatsl(congty a[],int n){
	printf("\n---THONG TIN CAC NHAN VIEN---\n");
	for(int i=0;i<n;i++){
		xuat(a[i]);
	}
}
void tuoicao(congty a[],int n){
	int max=0;
	char name[50];
	for(int i=0;i<n;i++){
		if(a[i].tuoi>max){
			max=a[i].tuoi;
			strcpy(name,a[i].ten);
		}
	}
	printf("\nNhan vien co tuoi lon nhat la : %s",name);
}
void timkiem(congty a[],int n,char name[]){
	for(int i=0;i<n;i++){
		if(strcmp(a[i].ten,name)==0){
			printf("\n---THONG TIN NHAN VIEN---\n");
			xuat(a[i]);
		}
	}
}

void xoa(congty a[],int *n,char name[]){
	int i;
	for(i=0;i<*n;i++){
		if(strcmp(a[i].ten,name)==0){
			break;
		}
	}
	if(i<*n){
		for(int j=i;j<*n-1;j++){
			a[j]=a[j-1];}
			(*n)--;
			printf("\nDa xoa thong tin nhan vien");
		}else {
		printf("\nKhong tim duoc nhan vien");}
		}
void tangluong(congty a[],int n){
    int x=0;
	for(int i=0;i<n;i++){
		if(a[i].tuoi > 50){
		a[i].luong*=1.15;
		}
    }
}	

int main(){
	congty a[100];
	int n;
	printf("Nhap so luong nhan vien :");
	scanf("%d",&n);
	nhapsl(a,n);
//	xuatsl(a,n);
	printf("\n-----MENU-----\n");
	int choice;
	do{
	printf("1. Tim nguoi co tuoi cao nhat\n");
	printf("2. Tim thong tin nhan vien\n");
	printf("3. Xoa nhan vien\n");
	printf("4. Xuat thong tin tat ca nhan vien\n");
	printf("\nNhap lua chon cua ban : ");
	scanf("%d",&choice);
	char name[50];
	switch(choice){
		case 1 : 
		tuoicao(a,n);
		break;
		
		case 2:
			printf("\nNhap ten nhan vien can tim :");
			scanf("%s",&name);
			timkiem(a,n,name);
			break;
		case 3:
			printf("\nNhap ten nhan vien can xoa :");
			scanf("%s",&name);
			xoa(a,&n,name);
			break;
		case 4:
		  tangluong(a,n);
		  xuatsl(a,n);
		  break;
	
	 default:
            printf("Lua chon khong hop le!\n");
    }
     printf("\nNhan Enter de quay lai menu, hoac nhap ky tu bat ki de ket thuc chuong trinh: ");
        while (getchar() != '\n'); 
    } while (getchar() == '\n');

    return 0;
}
