#include <stdio.h>

union un {
    int m1;
    float m2;
    char m3;
};

int main() {
    union un u;

    u.m1 = 65;
    u.m2 = 66.5;
    printf("u = %d\n", u.m1);

    return 0;
}