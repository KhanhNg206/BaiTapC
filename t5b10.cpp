#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    int na = 0, pa = 0, k = 0;

    printf("Nhap: ");

    while ((c = getchar()) != '\n') {
        c=tolower(c);

        if (c >= 'a' && c <= 'z') {
            if (c == 'a' || c == 'o' || c == 'e' || c == 'u' || c == 'i') {
                na++;
            } else {
                pa++;
            }
        } else {
            k++;
        }}
    printf("so luong nguyen am: %d\n", na);
    printf("so luong phu am: %d\n", pa);
    printf("so luong phim khac: %d\n", k);
    return 0;}
