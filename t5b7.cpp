#include<stdio.h>
 int main(){
 	int a,b,c,i;
    printf("Nhap vao so thu 1 va so thu 2 : \n");
    scanf("%d%d",&a,&b);
    for (i = 1; i <= a && i <= b; ++i) {
        if (a % i == 0 && b % i == 0)
            c = i;
    }

    printf("Uoc so chung lon nhat cua %d va %d la %d.", a, b, c);
    return 0;
}

