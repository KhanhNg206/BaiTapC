#include<stdio.h>
int main(){
	int diem,a,b,c;
	float tongdiem;
	printf("Nhap diem chuan : ");
	scanf("%d",&diem);
	printf("\nNhap diem 3 mon thi : \n");
	scanf("%d%d%d",&a,&b,&c);
    float kv;
	char khuvuc;
    printf("\nNhap khu vuc( A ,B ,C ,X ) :");
	scanf("%c",&khuvuc);
    if(khuvuc='A'){
      kv=2;}
    else if(khuvuc='B'){
    	kv=1;}
    else if(khuvuc='C'){
    	kv=0.5;}
    else if(khuvuc='X'){
    	kv=0;}
    printf("%.1f",kv);
    
    
	float dt;
	int doituong;
    printf("Nhap doi tuong (1 ,2 ,3) : ");
    scanf("%d",&doituong);
    if(doituong=1){
      dt=2.5;}
    else if(doituong=2){
    	dt=1.5;}
    else if(doituong=3){
    	dt=1;}
    else if(doituong=0){
    	dt=0;}
    printf("%.1f",dt);
   tongdiem=a+b+c+dt+kv;
   if(tongdiem>=diem){printf("\nDau [%d]",tongdiem);}
   else if (tongdiem<diem){printf("\nRot[%d]",tongdiem);
   }
}
