#include<stdio.h>
int main(){
	int * a;
	int z;
	z = 10;
	printf("How works pointer and how to handle pointers:\n\n");
	printf("Value of z = %d\n",z);
	printf("Address of z = %p\n",&z);
	a= &z;
	printf("\nNow a is assigned with the address of z:\n");
	printf("Address of pointer a = %p\n",a);
	printf("content of pointer a = %d\n\n",*a);
	z = 30;
	printf("Now, The value of z assigned to 30:\n");
	printf("Address of pointer a = %p\n",a);
	printf(" Content of pointer a = %d\n\n",*a);
	*a=5;
	printf("Now,pointer variable a is assigned the value 5\n");
	printf("Address of z = %p\n",&z);
	printf("Value of z = %d",z);
	return 0;
}
	

