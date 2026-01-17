#include <math.h>
#include <stdio.h>
#include <conio.h>
int main ()
{
	float x,y,S,Canhhuyen;
	printf ("\n Canh vuong 1 =");
	scanf ("%f",&x);
	printf ("\n Canh vuong 2 =");
	scanf ("%f",&y);
	S=(x*y)/2;
	Canhhuyen = sqrt((x*x)+(y*y));
	printf ("Dien tich cua tam giac nay la %f\n",S);
	printf ("canh huyen cua tam giac nay la %f\n",Canhhuyen);
	return 0;
}
