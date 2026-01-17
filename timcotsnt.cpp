#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
    int *x = (int*)a;
    int *y = (int*)b;
    return *x - *y;
}

int main(){
    int n = 4, m = 5;
    int a[4][5] = {
        {3, 1, 0, 7, 2},
        {2, 5, 10, 3, 4},
        {3, 17, 4, 1, 7},
        {10, 2, 0, 11, 9}
    };
    for(int i = 0; i < n; i++){
        //sap xep a[i]
        qsort(a[i], m, sizeof(int), cmp);
    }
    printf("Mang 2 chieu sau khi sap xep :\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
