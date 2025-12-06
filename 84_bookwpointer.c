#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    int year;
    float price;
};

void readBook(struct Book *b) {
    printf("Enter book title: ");
    scanf(" %[^\n]", b->title);
    printf("Enter author name: ");
    scanf(" %[^\n]", b->author);
    printf("Enter year of publication: ");
    scanf("%d", &b->year);
    printf("Enter price: ");
    scanf("%f", &b->price);
}

void displayBook(struct Book *b) {
    printf("\nBook Information:\n");
    printf("Title: %s\n", b->title);
    printf("Author: %s\n", b->author);
    printf("Year: %d\n", b->year);
    printf("Price: %.2f\n", b->price);
}

int main() {
    struct Book b;
    struct Book *ptr = &b;
    readBook(ptr);
    displayBook(ptr);
}
