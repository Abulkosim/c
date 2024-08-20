#include <stdio.h>

int main() {
    FILE *file_to_read = fopen("test.txt", "r");
    FILE *file_to_write = fopen("write.txt", "w");

    if (file_to_read == NULL || file_to_write == NULL) {
        perror("Error opening file");
        return 1;
    }

    char ch;
    while ((ch = fgetc(file_to_read)) != EOF) {
        if(ch == 'C') {
            ch = 'B';
        }

        fputc(ch, file_to_write);
    }

    fclose(file_to_read);
    fclose(file_to_write);
    return 0;


}