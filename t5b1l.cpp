#include <stdio.h>
#include<math.h>

int main(){
    int n;
    float s3 = 1,s1,s2,a=0,b=0;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        s3 *= (2 * i - 1.0) / (2 * i);
        a =(a+i);
    s1=a/n;
    b=b+(i*i);
    s2=sqrt(b);
    }
    printf(" s1 = %f ",s1);
   printf(" s2 = %f ",s2);
    printf("s3 = %f", s3);
    return 0;
}

