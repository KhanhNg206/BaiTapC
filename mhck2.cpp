#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char mathang[50];
    float dongia;
    char xuatxu[50];
} ql;

void nhap(ql *mh, int n) {
    for(int i = 0; i < n; i++) {
        printf("Nhap thong tin mat hang thu %d:\n", i + 1);
        printf("Ten mat hang: ");
        scanf("%s", mh[i].mathang);
        printf("Don gia: ");
        scanf("%f", &mh[i].dongia);
        printf("Xuat xu: ");
        scanf("%s", mh[i].xuatxu);
    }
}

int vietnam(ql *mh, int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(strcmp(mh[i].xuatxu, "vietnam") == 0) {
            count++;
        }
    }
    return count;
}
void xuatfile(ql *mh, int n) {
    FILE *file = fopen("mssv.txt", "w");
    if(file == NULL) {
        printf("Error\n");
        return;
    }
    for(int i = 0; i < n; i++) {
        if(strcmp(mh[i].xuatxu, "vietnam") == 0) {
            fprintf(file, "%s;%f;%s\n", mh[i].mathang, mh[i].dongia, mh[i].xuatxu);
        }
    }
    fclose(file);
}

int main() {
    int n;
    printf("Nhap so luong mat hang: ");
    scanf("%d", &n);
    ql *mh = (ql*)malloc(n * sizeof(ql));
    nhap(mh, n);
    int count = vietnam(mh, n);
    printf("so mat hang xuat xu vietnam: %d\n", count);
    xuatfile(mh,n);
    free(mh);
    return 0;
}

