#include<stdio.h>
int swap(int *a,int *b){
	int doi = *a;
	*a=*b;
	*b= doi;
}
 int main(){
 	int x=100,y=200;
 	swap(&x,&y);
 	printf("%d %d",x,y);
 	
 }
