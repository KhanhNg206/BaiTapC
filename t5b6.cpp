#include <stdio.h>

int main(){
    int n, i, f = 0;
    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);
    for (i = 2; i <= n / 2; i++) {
      if (n % i == 0) {
         f = 1;
         break;} }
    if (n == 1) {
        printf("1 khong phai la so nguyen to.");
    }
    else {
        if (f == 0)
            printf("%d la so nguyen to.", n);
        else
            printf("%d khong phai la so nguyen to.", n);
    }
  return 0;
}

