#include <stdio.h>
#include <stdlib.h> 
#include <time.h>  
#define MAX 100
#define duongdan "D:\\khanh hoc lap trinh\\bai02.txt"


void SinhMT(int a[MAX][MAX], int d, int c) {
    srand(time(NULL));
    for (int i = 0; i < d; ++i) {
        for (int j = 0; j < c; ++j) {
            a[i][j] = rand() % 100; // 
        }
    }
}

void LuuFile(int a[MAX][MAX], int d, int c) {
    FILE* f;
    f = fopen(duongdan, "wt");

    if (f == NULL) {
        printf("\nKhong tao duoc file.");
        getchar();
        exit(0);
    }

    fprintf(f, "%d %d\n", d, c);
    for (int i = 0; i < d; i++) {
        for (int j = 0; j < c; j++)
            fprintf(f, "%d\t", a[i][j]);
        fprintf(f, "\n");
    }

    fclose(f);
}


void DocFile(int a[MAX][MAX], int& d, int& c) {
    FILE* inFile;
    inFile = fopen(duongdan, "rt");

    fscanf(inFile, "%d %d", &d, &c);

    for (int i = 0; i < d; ++i) {
        for (int j = 0; j < c; ++j) {
            fscanf(inFile, "%d", &a[i][j]);
        }
    }

    fclose(inFile);
}


void XuatMT(int a[MAX][MAX], int d, int c) {
    for (int i = 0; i < d; ++i) {
        for (int j = 0; j < c; ++j) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int a[MAX][MAX], d = 5, c = 6;
    int b[MAX][MAX], x, y;

    SinhMT(a, d, c);
    LuuFile(a, d, c); 
    DocFile(b, x, y); 
    XuatMT(b, x, y);

    return 0;
}

