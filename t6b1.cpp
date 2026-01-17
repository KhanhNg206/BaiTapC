#include <stdio.h>
#include <conio.h>
int main(){
	float i,dc,df;
    for( i=0;i<=10;i+=1){
    	df=(9*i/5)+32;
            printf("%.0f do C = %.2f do F\n",i,df);
    }
    for ( i=32;i<=42;i+=1){
    	dc=5*(i-32)/9;
            printf("%.0f do F = %.2f do C\n",i,dc);
    }
    return 0;
}
