#include<stdio.h>
int snt(int n){
    if(n<2)
        return 0;
    else{
        for(int i=2;i<=n/2;i++)
            if(n%i==0)
                return 0;
        return 1;
    }
}
int main(){
	int n,m;
	printf("Nhap so hang a va so cot b : \n");
	scanf("%d%d",&n,&m);
	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("Nhap gia tri o hang %d , cot %d :",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	int res = 0, hang = -1;
    for(int i = 0; i < n; i++){
        int dem = 0;
        for(int j = 0; j < m; j++){
            if(snt(arr[i][j])){
                ++dem;
            }
        }
        if(dem > res){
            res = dem; hang = i;
        }
    }
    printf("Hang %d co nhieu so nguyen to nhat\n", hang);
    printf("So luong so nguyen to o hang %d : %d\n", hang, res);
    return 0;
}
	
