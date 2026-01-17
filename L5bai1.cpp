#include<stdio.h>
#include<stdlib.h>
void nhapmang(int a[],int &n){
	do{
		printf("\nNhap n :");
		scanf("%d",&n);
	}while(n<=0);
	for(int i=0 ; i<n; i++){
		printf("\nA[%d]=",i);
		scanf("%d", &a[i]);
	}
}
void xuatmang(int a[],int n){
	for(int i=0 ; i<n; i++){
		printf("\nA[%d]=%d",i,a[i]);
	}
}
void xuatfile(int a[],int n,char tenfile[50]){
	FILE *f;
	f = fopen(tenfile,"w");
	if(f==NULL){
		printf("\nLOI!");
		return;
	}
	fprintf(f,"%d\n",n);
	for(int i=0;i<n;i++){
		fprintf(f,"%d\n",a[i]);
	}
	fclose(f);
}
int main(){
	int a[100];
	int n;
	nhapmang(a,n);
	xuatfile(a,n,"Bai_01.txt");
}
