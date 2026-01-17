#include <stdio.h>

int main() {
    int n, s = 0;

    do {
        printf("Nhap so nguyen duong: ");
        scanf("%d", &n);
        s += n;
    } while(n != 0);

    printf("Tong = %d", s);
    return 0;}

 
