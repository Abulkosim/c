#include <stdio.h>

struct book {
    char title[10];
    char author[20];
    double price;
    int pages;
};

int main(){
    struct book book1 = {"Learn C", "Dennis Ritchie", 675.50, 325};

    struct book *ptr = &book1;

    printf("address: %s\n", ptr->author);

    printf("Size of book struct: %d", sizeof(struct book));
    return 0;
}