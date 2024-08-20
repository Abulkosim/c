#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main() {
    int filedescriptor = open("test.txt", O_WRONLY | O_CREAT);

    if (filedescriptor < 0) {
        printf("The open operation failed...");
        return -1;
    }

    printf("The open operation succeeded!");
    return 0;
}
