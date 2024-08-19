#include <stdio.h>

int main() {
   int arr[10];

   printf("Enter 10 integers: ");
   for (int i = 0; i < 10; i++) {
         scanf("%d", &arr[i]);
   }

    printf("You entered: ");

    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    printf("%d\n", sizeof(arr) / sizeof(arr[0]));

    return 0;
}