#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 69;
    int *p = &a;
    printf("Value of a: %d\n", a);
    int **pointer_to_pointer = &p;
    printf("%d\n", **pointer_to_pointer);
    return 0;
}