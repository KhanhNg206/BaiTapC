#include<stdio.h>
#include<string.h>
typedef struct{
    char hoten[50];
    char diachi[50];
    float diem;
}quanly;
void nhap(quanly &s){
    printf("\nTen : ");	scanf("%s",&s.hoten); fflush(stdin);
    printf("\nDia chi : ");	scanf("%s",&s.diachi); fflush(stdin);
	printf("\nDiem : "); scanf("%f",&s.diem); fflush(stdin);
}
void nhapsl(quanly s[],int n){
	for(int i=0;i<n;i++){
		printf("\n----%d----\n",i+1);
		nhap(s[i]);
	}
}
int dem(quanly s[],int n){
	int count=0;
	for(int i=0;i<n;i++){
		if(s[i].diem >= 8){
			count++;
		}
	}
	return count;
}
void govap(quanly s[],int n){
//	char x[]="Go vap";
	for(int i=0;i<n;i++){
		if(strcmp(s[i].diachi,"govap")==0){
			printf("\n%s",s[i].hoten);
		}
	}
}
//void xuatfile(quanly s[],int n){
//	FILE *f=fopen("student.txt","w");
//	if(f=NULL){
//		return;
//	}
//	for(int i=0;i<n;i++){
//		fprintf(f,"%s : %s , %f",s[i].hoten,s[i].diachi,s[i].diem);
//	}
//	fclose(f);
//}
//void docfile(quanly s[],int n){
//	FILE *f=fopen("student.txt","r");
//	if(f=NULL){
//		return;
//	}
//	for(int i=0;i<n;i++){
//		fscanf(f,"%s:%s;%f",&s[i].hoten,&s[i].diachi,&s[i].diem);
//}
////	printf("\n%s:%s;%f",s[i].hoten,s[i].diachi,s[i].diem);
//	fclose(f);
//}
int main(){
	quanly s[100];
	int n;
	scanf("%d",&n);
	nhapsl(s,n);
	printf("\nSo hoc sinh co diem >=8 = %d",dem(s,n));
	govap(s,n);
//	xuatfile(s,n);
//	docfile(s,n);
//	for(int i=0;i<n;i++){
//		printf("\n%s:%s;%f",s[i].hoten,s[i].diachi,s[i].diem);}
	}

