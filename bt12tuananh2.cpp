#include<iostream>
#include <stdio.h>
#include <conio.h>
#include<cmath>
#include<iomanip> 
#define pi 3.14   
#define e 2.71 
int main()
{
	double x; 
    double y1;
    double y2;
    cout << "nhap so thuc x = ";
    cin >> x;

 y1 = 4 * (pow(x,2) + 10*x*sqrt(x) + 3*x + 1);

 y2 = (sin(pi*pow(x, 2)) + sqrt(pow(x, 2) + 1)) / (pow(e, 2 * x) + cos(pi*x / 4)); 
 // e la hang so da duoc dinh nghia o tren

 cout << "Gia tri bieu thuc y1 = " << setprecision(3) << y1 << endl;
 cout << "Gia tri bieu thuc y2 = " << setprecision(3) << y2 << endl;

 return 0;
}
