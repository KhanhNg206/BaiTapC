#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

typedef struct {
    char id[10];
    char name[50];
    float GK;
    float TH;
    float LT;
    float TongKet;
} Student;

void format_name(char *name) {
    int i = 0, len = strlen(name);
    int start_of_word = 1;

    while (i < len) {
        
        while (name[i] == ' ' && name[i+1] == ' ' && i < len) {
            memmove(&name[i], &name[i + 1], len - i);
            len--;
        }

        
        if (start_of_word && isalpha(name[i])) {
            name[i] = toupper(name[i]);
            start_of_word = 0;
        }

     
        else if (isalpha(name[i])) {
            name[i] = tolower(name[i]);
        }


        if (name[i] == ' ') {
            start_of_word = 1;
        }

        i++;
    }
}

void calculate_final(Student *student) {
    student->TongKet = student->GK * 0.1 + student->TH * 0.3 + student->LT * 0.6;
}

void print_student(Student *student) {
    printf("Ma so sinh vien: %s\n", student->id);
    printf("Ho va ten: %s\n", student->name);
    printf("Diem giua kia: %.2f\n", student->GK);
    printf("Diem thuc hanh: %.2f\n", student->TH);
    printf("Diem li thuyet: %.2f\n", student->LT);
    printf("Diem tong ket: %.2f\n", student->TongKet);
}

int main() {
    Student student;

    printf("Nhap ma so sinh vien: ");
    fgets(student.id, sizeof(student.id), stdin);
    student.id[strcspn(student.id, "\n")] = 0;

    printf("Nhap ho va ten: ");
    fgets(student.name, sizeof(student.name), stdin);
    student.name[strcspn(student.name, "\n")] = 0;
    format_name(student.name);

    printf("Nhap diem giua ki: ");
    scanf("%f", &student.GK);

    printf("Nhap diem thuc hanh: ");
    scanf("%f", &student.TH);

    printf("Nhap diem li thuyet: ");
    scanf("%f", &student.LT);

    calculate_final(&student);

    printf("\nThong tin sinh vien:\n");
    print_student(&student);

    return 0;
}

