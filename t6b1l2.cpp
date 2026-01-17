#include <stdio.h>
#include <conio.h>
int main(){
	float i,dc,df,c;
    for( i=0;i<=10;i+=1){
    	df=(9*i/5)+32;
    	dc=32+i;
        c=5*i/9;
            printf("%.0f do C = %.2f do F | %.0f do f = %.2f do c\n",i,df,dc,c);
    }
    
    return 0;
}
