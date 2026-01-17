#include <stdio.h>

int main()
{
    int i, j;
    printf("BANG CUU CHUONG\n");
    for (i = 1; i <= 10; i++)
    { printf("%c",179);
        for (j = 2; j <= 9; j++)
        {
            printf(" %d x %.2d = %2d%c", j, i, j * i, 179);
        }
        printf("\n");
        
    }
    return 0;
}
