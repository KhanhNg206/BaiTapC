#include <math.h>
#include <stdio.h>
#include <conio.h>
int main ()
{
	int a,b,c ;
	printf ("\n  so nguyen a  la :");
	scanf ("%d",&a);
	printf ("\n  so nguyen b  la :");
	scanf ("%d",&b);
	c=a;
	a=b;
	b=c;
	printf ("sau khi hoan doi la\n a=%d\n b=%d\n",a,b );
	return 0;
}
