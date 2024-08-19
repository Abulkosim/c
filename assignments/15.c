#include <stdio.h>

int main() {
    int num = 3;

    printf("Adress of num: %p\n", &num);

    int *p = &num;

    printf("Pointer value of p: %p\n", p);
    printf("Value of num: %d\n", *p);

    return 0;
}