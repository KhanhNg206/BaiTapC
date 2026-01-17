#include<stdio.h>
#include<conio.h>
int main()
{
    float a,t;
    int n,i;
    printf("Nhap A :");
    scanf("%f",&a);
    t=0;i=0;
    while(t<=a)
    {
        i++;
        t+=float(1)/float(i);
    }
    printf("N = %d",i);
    getch();
    return 0;
}

