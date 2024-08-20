#include<stdio.h>

struct person {
    int age;
    float num;
    char favorite_character;
};

int main() {
    const struct person abulkosim = { 12, 2.2, 'a' };
    printf("%d\n", abulkosim.age);
    printf("%lf\n", abulkosim.num);
    printf("%c\n", abulkosim.favorite_character);

    return 0;
}