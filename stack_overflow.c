#include <stdio.h>

void causeStackOverflow(int count) {
    int arr[1000]; // Large array to quickly consume stack space
    printf("Recursion depth: %d\n", count);
    causeStackOverflow(count + 1); // Recursive call
}

int main() {
    causeStackOverflow(1);
    return 0;
}