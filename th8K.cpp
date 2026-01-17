#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void swap(float &a,float &b){
	int tam=a;
	a=b;
	b=tam;
}
void tang(float a[],int n){
	for(int i=0;i<n-1;i++){
		int vitrinhonhat = i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[vitrinhonhat])
			vitrinhonhat=j;
		}
		swap(a[i],a[vitrinhonhat]);
	}
}
void giam(float a[],int n){
	for(int i=0;i<n-1;i++){
		int vitrilonnhat = i;
		for(int j=i+1;j<n;j++){
			if(a[j]>a[vitrilonnhat])
			vitrilonnhat=j;
		}
		swap(a[i],a[vitrilonnhat]);
	}
}
int main() {
    float *a;
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    a = (float*) malloc(n * sizeof(float));
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%f", &a[i]);
    }
    printf("Cac phan tu cua mang la: ");
    for (int i = 0; i < n; i++) {
        printf("%f ", a[i]);
    }
    float m = 0;
    for (int i = 0; i < n; i++) {
        m += a[i];
    }
    m /= n;
    printf("\nGia tri trung binh cua mang la: %f", m);
    float ss = 0;
    for (int i = 0; i < n; i++) {
        ss += a[i] * a[i];
    }
    printf("\nTong binh phuong cac phan tu cua mang la: %f", ss);
    float d3 = 0;
    for (int i = 0; i < n; i++) {
        d3 += (a[i] - m) * (a[i] - m);
    }
    d3 /= n;
    printf("\nPhuong sai cua mang la: %f", d3);
    float d = sqrt(d3);
    printf("\nDo lech chuan cua mang la: %f", d);
    float x;
    int p;
    printf("\nNhap gia tri can them: ");
    scanf("%f", &x);
    printf("Nhap vi tri can them: ");
    scanf("%d", &p);
    n++;
    a = (float*) realloc(a, n * sizeof(float));
    for (int i = n - 1; i > p; i--) {
        a[i] = a[i - 1];
    }
    a[p] = x;
    printf("Mang sau khi them la: ");
    for (int i = 0; i < n; i++) {
        printf("%f ", a[i]);
    }
    printf("\nNhap vi tri can xoa: ");
    scanf("%d", &p);
    for (int i = p; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n--;
    a = (float*) realloc(a, n * sizeof(float));
    printf("Mang sau khi xoa la: ");
    for (int i = 0; i < n; i++) {
        printf("%f ", a[i]);
    }
    printf("\nNhap gia tri can tim: ");
    scanf("%f", &x);
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            printf("Tim thay gia tri %f tai vi tri %d", x, i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Khong tim thay gia tri %f trong mang", x);
    }
    printf("\nMang tang dan voi\n");
    tang(a, n);
     for (int i = 0; i < n; i++) {
        printf("%f ", a[i]);
    }
    printf("\nMang giam dan voi\n");
    giam(a, n);
     for (int i = 0; i < n; i++) {
        printf(" %f ", a[i]);
    }
    free(a);
    return 0;
}

