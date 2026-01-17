#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
	char mathang[50];
	float dongia;
	char xuatxu[50];
}hang;

void nhap(hang *a, int n) {
    for(int i = 0; i < n; i++) {
        printf("Nhap thong tin mat hang thu %d:\n", i + 1);
        printf("Ten mat hang: ");
        scanf("%s", a[i].mathang); fflush(stdin);
        printf("Don gia: ");
        scanf("%f", &a[i].dongia); fflush(stdin);
        printf("Xuat xu: ");
        scanf("%s", a[i].xuatxu); fflush(stdin);
    }
}
int vietnam(hang *a,int n){
	int count=0;
	for(int i=0;i<n;i++){
		if(strcmp(a[i].xuatxu,"vietnam") == 0 ){
			count++;
		}
	} return count;
}
void xuatfile(hang *a, int n) {
    FILE *file = fopen("ontap22.txt", "w");
    if(file == NULL) {
        printf("Error\n");
        return;
    }
    for(int i = 0; i < n; i++) {
        if(strcmp(a[i].xuatxu, "vietnam") == 0) {
            fprintf(file, "%s;%f;%s\n", a[i].mathang, a[i].dongia, a[i].xuatxu);
        }
    }
    fclose(file);
}

int main(){

	int n;
	printf("Nhap so luong hang : ");
	scanf("%d",&n);
	hang *a = (hang*)malloc(n * sizeof(hang));
	nhap(a,n);
    printf("\nSo mat hang co xuat xu tu viet nam : %d",vietnam(a,n));
   xuatfile(a,n);
   free(a);
   return 0;
}


