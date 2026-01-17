#include<stdio.h>
int uc(int a,int b){
	while(a!=b)
	if(a>b) a-=b;
	else b-=a;
	return a;
}
int bc(int a,int b){
	return a*b/uc(a,b);
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("ucln = %d\n",uc(a,b));
	printf("bcnn = %d\n",bc(a,b));
	return 0;
}
