#include <stdio.h>

// External variable
int globalVar = 10;

void printGlobalVar() {
    printf("Global Variable: %d\n", globalVar);
}

int main() {
    printGlobalVar();
    globalVar = 20;
    printGlobalVar();
    return 0;
}