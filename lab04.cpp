#include<stdio.h>
#include <stdio.h>

void SortArray(int *A, int n){
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = A[i];
        j = i - 1;

        /* Di chuy?n các ph?n t? c?a arr[0..i-1], l?n hon key,
        d?n m?t v? trí phía tru?c c?a v? trí hi?n t?i c?a chúng */
        while (j >= 0 && A[j] > key) {
            A[j + 1] = A[j];
            j = j - 1;
        }
        A[j + 1] = key;
    }
    printf("%d",A);
}

int main(){
	int A[1000] = {10,9,8,7,6,5,4,3,2,1};
int n = 10;
SortArray(A, n);
}
