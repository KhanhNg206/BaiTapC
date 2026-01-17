#include<stdio.h>
int F(int *x){
	*x+=1;
	return *x;
}
int main(){
	int a=5;
	printf("%d",F(&a)+F(&a));
	a=5;
	printf("\n%d",2*F(&a));
	return 0;
}
