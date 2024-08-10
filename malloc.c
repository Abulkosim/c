#include <stdio.h>
#include <stdlib.h>
// memory allocation

int main() {
    int *p = malloc(sizeof(int));
    *p = 69;
    printf("%d\n", *p);
    free(p);

    printf("%d\n", *p);
    return 0;
}