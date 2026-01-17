#include <math.h>
#include <stdio.h>
#include <conio.h>
int main ()
{
	int a,b,c,p;
	float S,P;
	printf ("\n Do dai canh thu nhat la =");
	scanf ("%d",&a);
	printf ("\n Do dai canh thu hai la =");
	scanf ("%d",&b);
	printf ("\n Do dai canh thu ba la =");
	scanf ("%d",&c);
	p= (a+b+c)/2;
	S= sqrt((p*(p-a))*(p*(p-b))*(p*(p-c)));
	P=p*2;
	printf ("dien tich cua tam giac nay la : %f\n",S);
	printf ("chu vi hinh tam giac nay la : %f\n ",P);
	return 0;
}
