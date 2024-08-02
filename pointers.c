#include <stdio.h>

int main() {
    // int num = 2;
    // int *pointer = &num;
    // int **pointerToPointer = &pointer;
    //
    // printf("%d\n", num);
    // printf("%d\n", pointer);
    // printf("%d\n", pointerToPointer);


    int arr[3] = {1, 2, 3};
    int *pointer = arr;
    int **pointerToPointer = &pointer;

    for (int i = 0; i < 3; i++) {
        printf("Element %d: %d\n", i, (*pointerToPointer + i));
    }


    return 0;
}
