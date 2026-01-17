#include <stdio.h>

int main() {
    int n;
    printf("Nh?p s? b?t kì: ");
    scanf("%d", &n);
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            if (j <= 5) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

