#include<stdio.h>
#include<math.h>

int main(){
    int n;
    float sum = 0,a;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    if(n<1){printf("Nhap lai");	}
    else{
	
    for(int i = 1; i <= n; i++){
        sum += pow(-1, i ) / pow(2*i,2);
        a=sum-sum-sum;
    }
    printf("Gia tri cua bieu thuc la: %f", a);
    return 0;}
}
