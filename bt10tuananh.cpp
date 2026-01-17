#include <math.h>
#include <stdio.h>
#include <conio.h>
#define PI 3.141593
int main ()
{
	float S,V;

 printf( "Nhap dien tich S: " );
 scanf( "%f", &S );
 V= ( 4 * PI * pow( sqrt( S / ( 4 * PI ) ), 3 ) ) / 3 ;
 printf( "The tich V = %f\n",V);
 return 0;
}


