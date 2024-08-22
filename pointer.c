#include <stdio.h>

struct Person {
    char* name;
    int age;
    void (*greet)(struct Person*);
};

void formal_greeting(struct Person* p) {
    printf("Good day, %s. I hope you're well at %d.\n", p->name, p->age);
}

void casual_greeting(struct Person* p) {
    printf("Hey %s! %d years young, right?\n", p->name, p->age);
}

int main() {
    struct Person people[] = {
        {"Alice", 30, formal_greeting},
        {"Bob", 25, casual_greeting}
    };

    struct Person** ptr = &people[0];

    (*ptr)->greet(*ptr);
    ptr++;
    (*ptr)->greet(*ptr);

    return 0;
}