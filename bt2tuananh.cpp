#include <math.h>
#include <stdio.h>
#include <conio.h>
int main ()
{
	float x,y,z,t,S ;
	printf ("\n Nhap so x la = ");
	scanf ("%f",&x);
	y=x*x ;
	z= 1+((1.0*y/(1+y)));
	t = 1+(y/z);
	S = y/t;
	printf ("Ket qua cua bieu thuc la %f\n ",S);
	return 0;
}
	
	
