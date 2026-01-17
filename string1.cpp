#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    printf("Nhap chuoi s1: ");
    scanf("%s", s1);
    printf("Nhap chuoi s2: ");
    scanf("%s", s2);
    printf("\n----------------\n");
    printf("Chuoi s1: %s\n", s1);
    printf("Chuoi s2: %s\n", s2);
    printf("\n----------------\n");
    printf("Do dai chuoi s1: %lu\n", strlen(s1));
    printf("Do dai chuoi s2: %lu\n", strlen(s2));
    printf("\n----------------\n");
    if (strcmp(s1, s2) == 0) {
        printf("Hai chuoi bang nhau\n");
    } else {
        printf("Hai chuoi khac nhau\n");
    }
    printf("\n----------------\n");
    strcat(s1, s2);
    printf("Chuoi sau khi noi: %s\n", s1);

    printf("\n----------------\n");
    if (strstr(s1, s2) != NULL) {
        printf("Chuoi s1 chua chuoi s2\n");
    } else {
        printf("Chuoi s1 khong chua chuoi s2\n");
    }

    
    if (strstr(s2, s1) != NULL) {
        printf("Chuoi s2 chua chuoi s1\n");
    } else {
        printf("Chuoi s2 khong chua chuoi s1\n");
    }

    return 0;
}

