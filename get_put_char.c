// #include <stdio.h>
//
// int main() {
//
//     char ch;
//
//     printf("Enter a character: ");
//     ch = getchar();
//
//     puts("You entered: ");
//     putchar(ch);
//
//     return 0;
// }

#include <stdio.h>

int main() {

    char ch;
    char word[10];
    int i = 0;

    printf("Enter characters. End with pressing enter: ");

    while(1) {
        ch = getchar();
        word[i] = ch;
        if (ch == '\n')
            break;
        i++;
    }

    printf("\nYou entered the word: %s", word);

    return 0;
}