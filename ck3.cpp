#include<stdio.h>
int main(){
	int A[]={2,3,5,7,11,13},*p,i=6%2;
	p=&A[4];
	printf("%d",*(--p)); //11
	printf("\n%d",(p-A)); //
	printf("\n%X",(A+A[i]));
	printf("\n%X",(p+i));
}
