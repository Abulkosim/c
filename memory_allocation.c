#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n = 5;

    // Using malloc
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    printf("Array using malloc: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Using calloc
    int *arr2 = (int *)calloc(n, sizeof(int));
    if (arr2 == NULL) {
        printf("Memory allocation failed\n");
        free(arr);
        return 1;
    }
    printf("Array using calloc: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    // Using realloc
    n = 10;
    arr = (int *)realloc(arr, n * sizeof(int));
    if (arr == NULL) {
        printf("Memory reallocation failed\n");
        free(arr2);
        return 1;
    }
    for (int i = 5; i < n; i++) {
        arr[i] = i + 1;
    }
    printf("Array after realloc: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Freeing memory
    free(arr);
    free(arr2);

    return 0;
}