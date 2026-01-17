#include<stdio.h>
int main(){
	int a,b;
	printf("Nhap :\n");
	scanf("%d%d",&a,&b);
	int arr[a][b];
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			printf("Nhap gia tri o hang %d , cot %d :",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
		
	}
	int min=1000000000,max=-1000000000;
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			if(arr[i][j]>max){
				max=arr[i][j];
			}
			else if(arr[i][j]<min){
				min=arr[i][j];
			}
		}
	}
	printf("\nGia tri nho nhat la : %d",min);
	printf("\nGia tri lon nhat la : %d",max);
}

