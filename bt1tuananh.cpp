#include <math.h>
#include <stdio.h>
#include <conio.h>
int main ()
{
	int n , S=0 ;
	printf ("\n Nhap n =" );
	scanf ("%d",&n);
	S=(n%10)+((n/10)%10)+(n/100);
	printf ("tong ba chu so cua %d la %d\n",n,S);
	return 0;
	
}
