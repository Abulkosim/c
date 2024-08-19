#include <stdio.h>

int main() {
    int numerator, denominator;

    printf("Enter a numerator: ");
    scanf("%d", &numerator);
    printf("Enter a denominator: ");
    scanf("%d", &denominator);

    if (numerator % denominator == 0) {
        printf("%d is divisible by %d\n", numerator, denominator);
    } else {
        printf("%d is not divisible by %d\n", numerator, denominator);
    }

    return 0;
}