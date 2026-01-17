#include<stdio.h>
 int digi(int n){
 	int sum=0;
 	while (n>0){	 
	  sum += n % 10;
            n /= 10;
           }
         return sum;   
 }
 int main(){
 	int n;
 	do {
	 scanf("%d",&n);
 	if(n<0){
 		break;
	 }
	
	 	printf("%d",digi(n));
	 }
	 while(1);
	 return 0;
 }
