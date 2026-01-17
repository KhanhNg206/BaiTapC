#include<stdio.h>
#include<math.h>

int main(){
    int n;
    float sum = 0;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    if(n==0){printf("1");	}
    else if(n<0){printf("Nhap lai");}
    else{
	
    for(int i=0 ; i <= n; i++){
        sum += pow(-1, i ) /( ((2*i)+1)*((2*i)+1)); 
       
    }
    printf("Gia tri cua bieu thuc la: %f", sum);
    return 0;}
}
