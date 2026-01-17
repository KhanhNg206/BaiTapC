#include <math.h>
#include <stdio.h>
#include <conio.h>
int main ()
{
      float x,y,X,Y,z,S,Ketqua;
      printf ("\n Nhap so nguyen x = ");
      scanf ("%f",&x);
      printf ("\n Nhap so nguyen y = ");
      scanf ("%f",&y);
      X=x*x;
      Y=y*y;
      S=sqrt(1+X+Y);
      z=3+((x+y)*(x+y));
      Ketqua = S/z;
      printf ("Ket qua cua bieu thuc la %.4f\n",Ketqua);
      return 0;
}#include <math.h>
#include <stdio.h>
#include <conio.h>
int main ()
{
	int a,b,c,d;
	float S;
	printf ("Input x1:");
	scanf ("%d",&a);
	printf ("Input y1:");
	scanf ("%d",&b);
	printf ("Input x2:");
	scanf ("%d",&c);
	printf ("Input y2:");
	scanf ("%d",&d);
	S=sqrt(((c-a)*(c-a))+((d-b)*(d-b)));        
	printf ("Khoang cach giua hai diem trong mat phang toa do XY la %.4f\n",S);
	return 0;
}
