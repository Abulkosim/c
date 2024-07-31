// Get char and put char
// #include<stdio.h>
//
// int main() {
//     char c;
//     printf("Enter a character: ");
//     c = getchar();
//     printf("You entered: ");
//     putchar(c);
//     return 0;
// }

// Character counting
// #include <stdio.h>
//
// int main() {
//     long nc = 0;
//     while (getchar() != EOF) {
//         ++nc;
//     }
//     return 0;
// }

#include <stdio.h>

int main() {

    int blanks = 0, tabs = 0, newlines = 0;
    char c;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            ++blanks;
        } else if (c == '\t') {
            ++tabs;
        } else if (c == '\n') {
            ++newlines;
        }
    }

    printf("%d blanks, %d tabs, %d newlines\n", blanks, tabs, newlines);
    return 0;
}