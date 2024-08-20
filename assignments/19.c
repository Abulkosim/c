/*
 *Initialize a char pointer variable. Use the malloc() function to allocate memory for a char array by assigning the result of malloc() to your pointer.
 *Your program should check that the memory was indeed allocated and if not, print an error message and exit with code 1. Make sure your allocation
 *size is a multiple of the char data type by using the sizeof() function so the code is portable. Google best practices for using malloc().
 *Don't forget to use free() to free the memory space before exiting the program if successful.
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    char *ptr = (char *) malloc(10 * sizeof(char));

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    free(ptr);

    return 0;
}
