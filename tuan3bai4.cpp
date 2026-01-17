#include <stdio.h>
#include <math.h>
#include <conio.h>
int main(){
	int a,b;
	printf("Nhap a , b\n");
	scanf("%d%d",&a ,&b);
	if(a>0 && a<10 && b>0 && b<10){
		printf("\nThe coordinate point (%d ,%d) lies in the First quadrant",a,b);}
	else if(a>-10 && a<0 && b>0 && b<10){
		printf("\nThe coordinate point (%d ,%d) lies in the Second quadrant",a,b);}
	else if(a>-10 && a<0 && b>-10 && b<0){
		printf("\nThe coordinate point (%d ,%d) lies in the Third quadrant",a,b);}
	else if(a>0 && a<10 && b>-10 && b<0){
		printf("\nThe coordinate point (%d ,%d) lies in the Fourth quadrant",a,b);}
}
