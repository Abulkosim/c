#include <stdio.h>

int main() {
    char str[6] = "Hello";

    printf("%s\n", str);

    for (int i = 0; i < 6; i++) {
        str[i] = 'A';
    }

    printf("%s\n", str);
    return 0;
}