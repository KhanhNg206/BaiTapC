#include<stdio.h>
#include<math.h>
//int prime(int n){
//	if(n<2){return 0;
//	}
//	for(int i=2;i<=sqrt(n);i++){
//		if(n%i==0)return 0;
		
//	}
//	return 1;
//}
int main(){
	int a,b;
	printf("Nhap a va b :\n");
	scanf("%d%d",&a,&b);
	int arr[a][b];
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			printf("Nhap so phan tu cua hang %d va cot %d :",i,j);
			
			scanf("%d",&arr[i][j]);
		}
	}\
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}

int brr[b][a];
for(int i=0;i<b;i++){
	for(int j=0;j<a;j++){
		brr[i][j]=arr[j][i];
	}
}
 printf("Ma tran chuyen vi : \n");
    for(int i = 0; i < b; i++){
        for(int j = 0; j < a; j++){
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}


