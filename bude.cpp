#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void nhap(int **arr,int n){
	*arr=(int *)malloc(n*sizeof(int));
	for(int i=0;i<n;i++){
		do{
			scanf("%d",&(*arr)[i]);
	}while((*arr)[i]<=0);
	}
}
//int max(int *arr,int n){
//   if(n==1){
//   	return arr[0];
//   }
//   else{
//   	int x=max(arr+1,n-1);
//   		if(arr[0]>x){
//   			return arr[0];
//		   }else return x;
//	   
//   }
//}
int max(int *arr,int n){
	int x=0;
	for(int i=0;i<n;i++){
		if(arr[i]>x){
			x=arr[i];
		}
}
	printf("\nmax = %d",x);
}
int tbp(int *arr,int n){
	int count=0;
	for(int i=0;i<n;i++){
		count+=arr[i]*arr[i];
	}
	printf("tbp = %d",count);
}
int vitri(int *arr, int n, int x) {
    int last_position = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            last_position = i;
        }
    }
    if(last_position != -1){
    	printf("\nvi tri cuoi : %d",last_position);
	}else printf("\nKhong tim thay %d trong mang",x);
}
int main(){
	int *arr;
	int n;
	scanf("%d",&n);
	nhap(&arr,n);
//	printf("\n%d",max(arr,n));
    max(arr,n);
	tbp(arr,n);
	
	
	 int x; // Ph?n t? c?n tìm v? trí cu?i cùng
    printf("\nNhap phan tu can tim vi tri cuoi cung: ");
    scanf("%d", &x);
////    int last_position = vitri(arr, n, x);
//    if (vitri(arr,n,x) != -1) {
//        printf("\nVi tri cuoi cung cua phan tu %d la: %d", x, vitri(arr,n,x));
//    } else {
//        printf("\nKhong tim thay phan tu %d trong mang.", x);
//    }

    free(arr); // Gi?i phóng b? nh? dã c?p phát cho m?ng
    return 0;
}
