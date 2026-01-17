#include <stdio.h>

int main(){
    int sum = 0;
    float n;
    scanf("%d",&n);
    for(int i = 1; i <= n; i ++){
        sum +=i/n; 
    }
    printf(" %d", sum);
    return 0;
}

