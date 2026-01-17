#include <stdio.h>
#include <math.h>
int hh(int n){
    int tong = 0;
    for(int i = 1; i <= sqrt(n); i ++){
        if(n % i == 0){
            tong += i;
            if(i != n / i){
                tong += n / i;}}}
    if(tong - n == n){
        return 1;
    }
    return 0;}
int main(){
    int n,i;
     printf("Nhap so bat dau :");
 	 scanf("%d",&i);
 	 printf("Nhap so ket thuc :");
 	 scanf("%d",&n);
    for( i ; i <= n; i ++){
        if(hh(i)){
            printf("%d ", i);
        }}
    return 0;
}
