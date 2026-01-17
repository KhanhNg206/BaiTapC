#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct {
	char ma[10];
	char tensach[50];
	float giatien;
	char loaisach[50];
}sach;

void nhap(sach &a){
		printf("\nMa sach :"); scanf("%s",&a.ma); fflush(stdin);
		printf("\nTen sach :"); gets(a.tensach); fflush(stdin);
		printf("\nGia tien :"); scanf("%f",&a.giatien); fflush(stdin);
		printf("\nLoai sach :"); scanf("%s",&a.loaisach); fflush(stdin);
	
}
void nhapsl(sach a[],int n){
	for(int i=0;i<n;i++){
		printf("\nNHAP THONG TIN SACH %d",i+1);
		nhap(a[i]);
		
	}
}
void xuat(sach &a){
		printf("\nMa sach : %s",a.ma); 
		printf("\nTen sach : %s",a.tensach); 
		printf("\nGia tien : %f",a.giatien); 
		printf("\nLoai sach : %s",a.loaisach); 
}
void xuatsl(sach a[],int n){
	for(int i=0;i<n;i++){
		printf("\n---THONG TIN SACH %d---\n",i+1);
		xuat(a[i]);
	}
}
void tienmax(sach a[],int n){
	int max =0;
	char name[50];
	for(int i=0;i<n;i++){
		if(a[i].giatien>max){
			max = a[i].giatien;
			strcpy(name,a[i].tensach);
		}
	}
	printf("\nSach co gia tien lon nhat la : %s",name);
}

void timma(sach a[],int n,char ma[]){
	for(int i=0;i<n;i++){
		if(strcmp(a[i].ma,ma)==0){
			printf("Ten sach ban tim : %s",a[i].tensach);
		}
	}
}

void xoa(sach a[],int *n,char ma[]){
	int i;
	for( i=0;i<*n;i++){
		if(strcmp(a[i].ma,ma)==0){
			break;
		}
	}
	if(i<*n){
		for(int j=i;j<*n-1;j++){
			a[j]=a[j+1];  }		
		(*n)--;
		printf("\nXoa thanh cong!");
	}else printf("\nXoa that bai!");
	}
void intt(sach a[],int n){
	for(int i=0;i<n;i++){
		if(strcmp(a[i].loaisach,"vanhoc")==0){
			xuat(a[i]);
		}
	}
}

int tangtien(sach a[],int n){
	for(int i=0;i<n;i++){
		if(strcmp(a[i].loaisach,"vanhoc")==0){
			a[i].giatien*=1.1;
			}		
		}
	}
void xuatfile(sach a[],int n,char key[]){   
	FILE *f=fopen("sach.txt","w");
	for(int i=0;i<n;i++){
		if(strcmp(a[i].loaisach,key)==0){
			fprintf(f,"%s ; %s ; %f : %s",a[i].ma,a[i].tensach,a[i].giatien,a[i].loaisach);
		}
	}
	fclose(f);
}
//void sapxep(sach a[],int n){
//	for(int i=0;i<n;i++){
//		if(a[i].ma==a[i+1].ma){
//			int temp = a[i].ma;
//			a[i].ma=a[i+1].ma;
//			a[i+1].ma=temp;
//		}
//	}
//}

int main(){
	int n;
	sach a[100];
	printf("\nNhap so luong sach :");
	scanf("%d",&n);
	nhapsl(a,n);
	int choice;
	char ma[10];
	do{
	printf("\n----MENU-----");
	printf("\n1. Tim sach co gia tien lon nhat");
	printf("\n2. Tim ten sach bang ma ");
	printf("\n3. Xoa mot cuon sach ");
	printf("\n4. In thong tin sach the loai van hoc");
	printf("\n5. Sach van hoc tang 10%");
	printf("\n6. Luu thong tin sach theo the loai");
	printf("\nNhap lua chon : ");
	scanf("%d",&choice);
	switch(choice){

    case 1:
	   	tienmax(a,n);
	   	break;
	case 2:
	    printf("\nNhap ma sach can tim : ");
	    scanf("%s",&ma);
	    timma(a,n,ma);
	    break;
	case 3:
		printf("\nNhap ma sach can xoa :");
        scanf("%s",&ma);
		xoa(a,&n,ma);
		break;
	case 4:
		intt(a,n);
		break;
	case 5:
		tangtien(a,n);
		xuatsl(a,n);
		break;
	case 6:
		char loai[50];
		printf("\nNhap the loai sach can luu : ");
		scanf("%s",loai);
		xuatfile(a,n,loai);
		break;
	default:
            printf("Lua chon khong hop le!\n");
    }
      printf("\nNhan Enter de quay lai menu, hoac nhap ky tu bat ki de ket thuc chuong trinh: ");
        while (getchar() != '\n'); 
    } while (getchar() == '\n');
	
}
