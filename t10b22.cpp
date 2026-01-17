#include<stdio.h>
#include<math.h>
void nhapmang(int arr[100],int &n){
	printf("Nhap so luong phan tu : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d :",i);
		scanf("%d",&arr[i]);
	}
}
void hienthi(int arr[],int n){
	printf("gia tri cua mang la : ");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
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
void insonguyento(int arr[], int n){
    printf("\nCac so nguyen to co trong mang la: ");
    for(int i=0;i<n;i++)
        if(snt(arr[i]))
            printf("%d ",arr[i]);
}
int ab(int arr[],int n){
	int a,b;
	printf("\nNhap a va b : \n");
	scanf("%d%d",&a,&b);
	printf("So phan tu trong khoang a b la :  ");
	for(int i=0;i<n;i++){
		if(arr[i]>=a && arr[i]<=b){
			printf("%d ",arr[i]);
		}
		else if (arr[i]>=b && arr[i]<=a){
			printf("%d ",arr[i]);
		}
	}
}
int xy(int arr[],int n){
	int x,y;
	printf("\nNhap vi tri x va y : \n");
	scanf("%d%d",&x,&y);
	printf("Cac phan tu nam vi tri thu %d den %d la : ",x,y);
	for(int i=x-1;i<y;i++){
		printf("%d ",arr[i]);
	}
}
int sumchan(int arr[],int n){
	int sum=0;
	printf("\nTong cac so chan la : ");
	for(int i=0;i<n;i++){
		if(arr[i]%2==0){
			sum+=arr[i];			
		}
	}
	printf("%d ",sum);
}
int bonsau(int arr[],int n){
	printf("\nCac phan tu chia het cho 4 va co chu so tan cung la 6 la : ");
	for(int i=0;i<n;i++){
		if(arr[i]%4==0 && arr[i]%10==6){
			printf("%d ",arr[i]);
		}
	}
}
int sole(int arr[],int n){
	printf("\nMang sau khi tang so le len 2 lan la : ");
	for(int i=0;i<n;i++){
		if(arr[i]%2!=0){
			arr[i]*=2;
		}
		printf("%d ",arr[i]);
}
}
void vitri(int arr[100],int &n,int m,int p){
	printf("\nNhap gia tri x va vi tri p :\n");
	scanf("%d%d",&m,&p);
	int size = sizeof(arr)/sizeof(arr[0]);
	if(n==size){
		printf("\nKhong the them vao mang!");
	}
	n++;
	for(int i=n-1;i>p;i--){
		arr[i]=arr[i-1];
	}
	arr[p]=m;
}
void xoamangtheovitri(int arr[100],int &n,int vitrixoa){
	printf("\nNhap vi tri can xoa :");
	scanf("%d",&vitrixoa);
	for(int i=vitrixoa;i<n-1;i++){
		arr[i]=arr[i+1];
	}
	n--;
}
int timkiem(int arr[100],int n,int tk){
	int kq;
	for(int i=0;i<n;i++){
		if(arr[i]==tk){
		kq=1;
		return 1;
	}
}
return kq;
}
void thuchientimkiem(int arr[100],int n){
	int tk;
	printf("\nNhap vao gia tri can tim :");
	scanf("%d",&tk);
	int kq=timkiem(arr,n,tk);
	if(kq==1){
		printf("\nTim thay!");
	}
	else{
		printf("\nKhong tim thay!");
	}
}
void swap(int &a,int&b){
	int tam=a;
	a=b;
	b=tam;
}
void tang(int arr[],int n){
	for(int i=0;i<n-1;i++){
		int vitrinhonhat = i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[vitrinhonhat])
			vitrinhonhat=j;
		}
		swap(arr[i],arr[vitrinhonhat]);
	}
}
void giam(int arr[],int n){
	for(int i=0;i<n-1;i++){
		int vitrilonnhat = i;
		for(int j=i+1;j<n;j++){
			if(arr[j]>arr[vitrilonnhat])
			vitrilonnhat=j;
		}
		swap(arr[i],arr[vitrilonnhat]);
	}
}

int main(){
	int arr[100],n;
	int p,x,m,vitrixoa;
	nhapmang(arr,n);
	hienthi(arr,n);
	insonguyento(arr,n);
	ab(arr,n);
	xy(arr,n);
	sumchan(arr,n);
	bonsau(arr,n);
	sole(arr,n);
    vitri(arr,n,m,p);
    hienthi(arr,n);
    xoamangtheovitri(arr,n,vitrixoa);
    hienthi(arr,n);
    thuchientimkiem(arr,n);
    printf("\nMang tang dan voi");
    tang(arr,n);
    hienthi(arr,n);
    printf("\nMang giam dan voi");
    giam(arr,n);
    hienthi(arr,n);
}
