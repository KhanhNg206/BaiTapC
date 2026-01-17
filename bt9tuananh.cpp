#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
int main ()
{
	char c;
	printf ("\nnhap vao mot ki tu thuong ");
	scanf ("%c",&c);
	c= toupper (c);
	printf(" %c \n",c);
	fflush (stdin);
	printf ("\nnhap vao mot ki tu IN HOA ");
	scanf ("%c",&c);
	c= tolower (c);
	printf ("%c",c);
	return 0;
	
	
    
}


