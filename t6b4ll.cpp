#include <stdio.h>
#include<math.h>
#include<conio.h>
int main(){
    int n;
    float s3 = 1,s1,s2,a=0,b=0,s4=0;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    if(n==0){ printf("Nhap lai");}
	else if(n>=1){	
          for(int i = 1; i <= n; i++){
              s3 *= (2 * i - 1.0) / (2 * i);
              a =(a+i);
              s1=a/n;
              b=b+(i*i);
              s2=sqrt(b);
              s4+=i*(i+1)*(i+2);
    }
    printf("s1 = %.1f \n",s1);
    printf("s2 = %.4f \n",s2);
    printf("s3 = %.6f\n", s3);
    printf("s4 = %.0f\n",s4);
    return 0;}}
