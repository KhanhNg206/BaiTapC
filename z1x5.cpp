#include<iostream>
using namespace std;
int main(){
	float bmi;
	float cc,cn;
	cout<<"Nhap vao chieu cao va can nang : "<<endl;
	cin>>cc>>cn;
	
	bmi=cn/(cc*cc);
	cout<<bmi;
}
