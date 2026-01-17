#include <math.h>
#include <stdio.h>
#include <conio.h>
#define pi 3.14   
#define e 2.71 
int main ()
{
	float x,y1,y2 ;
	printf ("\n nhap so thuc x = ");
	scanf ("%f",&x);
	y1 = 4 * (pow(x,2) + 10*x*sqrt(x) + 3*x + 1);
    y2 = (sin(pi*pow(x, 2)) + sqrt(pow(x, 2) + 1)) / (pow(e, 2 * x) + cos(pi*x / 4)); 
    
	   if(y1 % 2 == 0)
{
        printf("%d la so chan",y1);
    }else{
        printf("%d la so le",y1);    
    } 
	
}
