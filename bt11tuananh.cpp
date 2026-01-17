#include <math.h>
#include <stdio.h>
#include <conio.h>
int main ()
{
	float C,F ;
    printf("\n Nhap vao nhiet do F = ");
    scanf("%f", &F);
    C = 5*(F - 32)/9;
    printf("\n Nhieu do Celcius = %.1f oC", C);
    return 0;
}
