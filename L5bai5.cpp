#include <stdio.h>
#include <string.h>

typedef struct Person {
    unsigned int code;
    char firstName[32];
    char lastName[32];
    char address[32];
    char birthday[10];
} Person;
 void createPersonDat(const char *fileName) {
    FILE *fp = fopen(fileName, "wb");
    if (fp == NULL) {
        printf("Khong the mo file %s!\n", fileName);
        return;
    }

    // T?o d? li?u m?u
    Person person1 = {1654, "Jackie", "Chan", "Hong Kong", "7/22/54"};
    Person person2 = {4424, "Tony", "Jaa", "Thailand", "5/12/76"};

    // Ghi d? li?u vào t?p tin
    fwrite(&person1, sizeof(Person), 1, fp);
    fwrite(&person2, sizeof(Person), 1, fp);

    fclose(fp);
}
void readPersonDat(const char *fileName) {
    FILE *fp = fopen(fileName, "rb");
    if (fp == NULL) {
        printf("Khong the mo file %s!\n", fileName);
        return;
    }

    Person person;

    // Ð?c t?ng b?n ghi trong t?p tin
    while (fread(&person, sizeof(Person), 1, fp)) {
        // Hi?n th? thông tin cá nhân
        printf("%s %s\n", person.firstName, person.lastName);
        printf("    Ma so: %d\n", person.code);
        printf("    Dia chi: %s\n", person.address);
        printf("    Ngay sinh: %s\n\n", person.birthday);
    }

    fclose(fp);
}


int main() {
    createPersonDat("D:\\khanh hoc lap trinh\\PERSON.txt");
    readPersonDat("D:\\khanh hoc lap trinh\\PERSON.txt");

    return 0;
}

