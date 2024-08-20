#include <stdio.h>

struct sampleStruct {
    int integer;
};

int main() {
    struct sampleStruct *p;
    struct sampleStruct sample;

    p = &sample;

    sample.integer = 10;
    printf("Value using instance dot-notation: %d\n", sample.integer);

    (*p).integer = 20;

    printf("Value using pointer dot-notation: %d\n", (*p).integer);

    p->integer = 30;
    printf("Value using indirect membership operator: %d\n", p->integer);

    return 0;
}