#include <stdio.h>
#include <math.h>

int main()
{
    float x, e = 1, t = 1;
    int n = 1;
    printf("Nhap so thuc x: ");
    scanf("%f", &x);
    while (fabs(t) > 0.0001)
    {
        t *= x / n;
        e += t;
        n++;
    }
    printf("Gia tri cua e^%.0f la: %f", x, e);
    return 0;
}

