#include <stdio.h>
int main() {
    char c;
    int d=0,l=0,o=0;
    printf("Nhap cac ki tu: ");
    while ((c = getchar()) != '\n') {
        if (c >= '0' && c <= '9') {
            d++;
        } else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            l++;
        } else {
            o++;
        }} 
    printf("so luong chu so: %d\n", d);
    printf("so luong chu cai: %d\n", l);
    printf("so luong cac phim khac: %d\n", o);
    return 0;
}

