#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    char id[10];
    char name[50];
    float GK;
    float TH;
    float LT;
    float TongKet;
} Student;

void calculate_total_score(Student *student) {
    student->TongKet = student->GK * 0.1 + student->TH * 0.3 + student->LT * 0.6;
}

void format_name(char *name) {
    int i = 0;
    while (name[i]) {
        if (i == 0 || name[i - 1] == ' ') {
            name[i] = toupper(name[i]);
        } else {
            name[i] = tolower(name[i]);
        }
        i++;
    }
}

void print_student_info(Student *student) {
    printf("Ma so sinh vien: %s\n", student->id);
    printf("Ho va ten: %s\n", student->name);
    printf("Diem giua ki: %.2f\n", student->GK);
    printf("Diem thuc hanh: %.2f\n", student->TH);
    printf("Diem li thuyet: %.2f\n", student->LT);
    printf("Diem tong ket: %.2f\n", student->TongKet);
}

int main() {
    
    Student *student = (Student *) malloc(sizeof(Student));
    printf("Nhap ma so sinh vien: ");
    scanf("%s", student->id);
    printf("Nhap ho va ten: ");
    scanf(" %[^\n]", student->name);
    format_name(student->name);
    printf("Nhap diem giua ki: ");
    scanf("%f", &student->GK);
    printf("Nhap diem thuc hanh: ");
    scanf("%f", &student->TH);
    printf("Nhap diem li thuyet: ");
    scanf("%f", &student->LT);
    calculate_total_score(student);
    print_student_info(student);

    free(student);
    return 0;
}

