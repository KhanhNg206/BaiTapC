#include <stdio.h>
#include <string.h>
#include <ctype.h>
void xoakhoangtrang(char *str) {
    int i, j;
    int len = strlen(str);

    
    while (str[0] == ' ') {
        for (i = 0; i < len; i++) {
            str[i] = str[i + 1];
        }
        len--;
    }

    
    while (str[len - 1] == ' ') {
        str[len - 1] = '\0';
        len--;
    }

    for (i = 0; i < len; i++) {
        if (str[i] == ' ' && str[i + 1] == ' ') {
            for (j = i; j < len; j++) {
                str[j] = str[j + 1];
            }
            len--;
            i--;
        }
    }
}
void inhoadautu(char *str) {
    int i;
    int len = strlen(str);
    str[0] = toupper(str[0]);
    for (i = 1; i < len; i++) {
        if (str[i - 1] == ' ') {
            str[i] = toupper(str[i]);
        }
    }
}

int main() {
    char x[100];
    printf("Nhap chuoi: ");
    gets(x);  
    xoakhoangtrang(x);  
    inhoadautu(x);
    printf("Chuoi sau khi xoa khoang trang va in hoa dau tu: %s\n", x);
    return 0;
}

