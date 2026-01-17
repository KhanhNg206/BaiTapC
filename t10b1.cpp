#include <stdio.h>
#include<math.h>
void nhap(float x[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%f", &x[i]);
    }
}
void hienthi(float x[], int n) {
    printf("Cac gia tri da nhap la: ");
    for (int i = 0; i < n; i++) {
        printf("%.f ", x[i]);
    }
}

float tbc(float x[], int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += x[i];
    }
    return sum / n;
}
float tbp(float x[],int n){
	float sum=0;
	for (int i = 0; i < n; i++) {
        sum += x[i]*x[i];
	}
    return sum;
}
float phuongsai(float x[],int n){
	 float tbp=0;
	 for(int i=0;i<n;i++){
	 	tbp+=( x[i] - tbc(x,n) ) * ( x[i] - tbc(x,n) );
	 }		
	return tbp/n;
}
float dolechchuan(float x[],int n){
	 float tbp=0;
	 for(int i=0;i<n;i++){
	 	tbp+=( x[i] - tbc(x,n) ) * ( x[i] - tbc(x,n) );
	 }		
	return sqrt(tbp/n);
}
int main(){
    float x[100];
    int n;  
        printf("Nhap so phan tu : ");
        scanf("%d", &n);
        nhap(x, n);
        hienthi(x, n);
        printf("\nTrung binh cong = %.2f\n", tbc(x, n));
        printf("\nTong binh phuong = %.2f\n", tbp(x, n));
        printf("\nPhuong sai = %.2f\n",phuongsai(x,n));
        printf("\nDo lech chuan = %.2f\n",dolechchuan(x,n));
    return 0;
}

