#include <stdio.h>

float NegAverage(int a[], int n) {
    static int i = 0, sum = 0, count = 0;
    if(i == n) {
        return (float)sum/count;
    } else {
        if(a[i] < 0) {
            sum += a[i];
            count++;
        }
        i++;
        return NegAverage(a, n);
    }
}

int main() {
    int a[] = {-2, 3, -4, -5, 6, -8};
    int n = sizeof(a) / sizeof(a[0]);

    printf("Trung bình các ph?n t? âm = %.2f\n", NegAverage(a, n));

    return 0;
}

