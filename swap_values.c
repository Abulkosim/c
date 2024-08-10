#include <stdio.h>

void swap_values(int *a, int *b) {
    const int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int first = 1, second = 2;

    swap_values(&first, &second);
    printf("first: %d\nsecond: %d\n", first, second);

    return 0;
}