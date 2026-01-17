#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_NAME_LENGTH 50
#define MAX_AUTHOR_LENGTH 50
#define MAX_TYPE_LENGTH 20

typedef struct {
    char id[MAX_NAME_LENGTH];
    char name[MAX_NAME_LENGTH];
    char author[MAX_AUTHOR_LENGTH];
    char type[MAX_TYPE_LENGTH];
    int year;
    double price;
    int quantity;
} Book;

Book books[MAX_BOOKS];
int book_count = 0;

void input_book() {
    printf("Nhap ma sach: ");
    scanf("%s", books[book_count].id);
    printf("Nhap ten sach: ");
    scanf("%s", books[book_count].name);
    printf("Nhap tac gia: ");
    scanf("%s", books[book_count].author);
    printf("Nhap kieu sach(TN/XH): ");
    scanf("%s", books[book_count].type);
    printf("Nhap nam xuat ban: ");
    scanf("%d", &books[book_count].year);
    printf("Nhap gia sach: ");
    scanf("%lf", &books[book_count].price);
    printf("Nhap so luong: ");
    scanf("%d", &books[book_count].quantity);
    book_count++;
}

void print_books() {
	printf("----------\n");
    for (int i = 0; i < book_count; i++) {
        printf("Ma sach: %s\n", books[i].id);
        printf("Ten sach: %s\n", books[i].name);
        printf("Tac gia: %s\n", books[i].author);
        printf("Kieu sach: %s\n", books[i].type);
        printf("Nam xuat ban: %d\n", books[i].year);
        printf("Gia sach: %.2lf\n", books[i].price);
        printf("So luong sach: %d\n", books[i].quantity);
    }
}

double total_price() {
    double total = 0;
    for (int i = 0; i < book_count; i++) {
        total += books[i].price * books[i].quantity;
    }
    return total;
}

void sort_books() {
    for (int i = 0; i < book_count - 1; i++) {
        for (int j = i + 1; j < book_count; j++) {
            if (strcmp(books[i].id, books[j].id) > 0) {
                Book temp = books[i];
                books[i] = books[j];
                books[j] = temp;
            }
        }
    }
}

void find_book(char* name) {
    for (int i = 0; i < book_count; i++) {
        if (strcmp(books[i].name, name) == 0) {
            printf("Sach duoc tim thay: %s\n", books[i].name);
            return;
        }
    }
    printf("Khong tim thay loai sach\n");
}

void print_books_before_2000() {
    for (int i = 0; i < book_count; i++) {
        if (books[i].year < 2000) {
            printf("Ten sach: %s\n", books[i].name);
        }
    }
}

int count_books_over_50000() {
    int count = 0;
    for (int i = 0; i < book_count; i++) {
        if (books[i].price > 50000) {
            count++;
        }
    }
    return count;
}

void print_books_by_type(char* type) {
    for (int i = 0; i < book_count; i++) {
        if (strcmp(books[i].type, type) == 0) {
            printf("Ten sach: %s\n", books[i].name);
        }
    }
}

int main() {
    char name[MAX_NAME_LENGTH];
    char type[MAX_TYPE_LENGTH];

    printf("Nhap thong tin cac cuon sach:\n");
    input_book();

    printf("Xuat thong tin cac cuon sach:\n");
    print_books();
    printf("----------\n");
    printf("Them 1 cuon sach:\n");
    input_book();

    printf("Tinh tong thanh tien cac cuon sach:\n");
    printf("Tong thanh tien cac cuon sach : %.2lf\n", total_price());

    printf("Sap xep cac cuon sach theo ma:\n");
    sort_books();
    print_books();
    
    printf("----------\n");
    printf("Nhap ten sach can tim: ");
    scanf("%s", name);
    find_book(name);

    printf("Xuat cac cuon sach xuat ban truoc nam 2000:\n");
    print_books_before_2000();

    printf("Dem so luong sach co gia hon 50000:\n");
    printf("So luong sach co gia hon 50000: %d\n", count_books_over_50000());
    
    printf("----------\n");
    printf("Nhap loai sach de xuat: ");
    scanf("%s", type);
    print_books_by_type(type);

    return 0;
}


