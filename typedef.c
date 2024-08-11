#include <stdio.h>

struct book {
    char title[10];
    char author[20];
    double price;
    int pages;
};

typedef struct book Book;

int main() {
    Book book1 = {"Learn C", "Dennis Ritchie", 675.50, 325};

    printf("Book title: %s\n", book1.title);
    printf("Book author: %s\n", book1.author);
    printf("Book price: %.2f\n", book1.price);
    printf("Book pages: %d\n", book1.pages);

    return 0;
}