#include<stdio.h>
#include<stdlib.h>
void nhapdiem(float *diem,int n){
	for(int i=0;i<n;i++){
		do{
		printf("Nhap diem sinh vien thu %d : ",i+1);
		scanf("%f",&diem[i]);
		}
		while(diem[i]<0 || diem[i]>10);
		
	}
}
float tinhdiem(float *diem, int n) {
    int hocLai = 0;
    for (int i = 0; i < n; i++) {
        if (diem[i] < 3) {
            hocLai++;
        }
    }
    return (float) hocLai / n * 100;
}
int main(){
	float *diemA,*diemB;
	int n,m;
	printf("Nhap so luong sinh vien lop A :\n");
	scanf("%d",&n);
	printf("Nhap so luong sinh vien lop B :\n");
	scanf("%d",&m);
	diemA=(float *)malloc(n*sizeof(float));
	diemB=(float *)malloc(m*sizeof(float));
	printf("Nhap diem cho sinh vien lop A :\n");
	nhapdiem(diemA,n);
	printf("Nhap diem cho sinh vien lop B :\n");
	nhapdiem(diemB,m);
	float tyleA = tinhdiem(diemA,n);
	float tyleB = tinhdiem(diemB,m);
	printf("Phan tram sinh vien hoc lai lop A la : %.2f%%",tyleA);
	printf("\nPhan tram sinh vien hoc lai lop B la : %.2f%%",tyleB);
	free(diemA);
	free(diemB);
}
