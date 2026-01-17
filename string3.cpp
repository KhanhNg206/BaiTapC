#include <stdio.h>
#include <string.h>
void LEFT(char* str, int n) {
    char a[n+1];
    strncpy(a, str, n);
    a[n] = '\0';
    printf("left ( str , 9 ): [ %s ]\n", a);
}

void RIGHT(char* str, int n) {
    int len = strlen(str);
    char a[n+1];
    strncpy(a, &str[len-n], n);
    a[n] = '\0';
    printf("right ( str , 7 ): [ %s ]\n", a);
}

int main() {
    char str[] = "Kernighan and Ritchie";
    LEFT(str, 9);
    RIGHT(str, 7);

    return 0;
}

