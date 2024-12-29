#include <stdio.h>
#include <stdlib.h>
int main(void) {
    char lbuf[256];
    for (;;) {
        if (fgetline(sizeof lbuf, lbuf, stdin)) {
            size_t n;
            size_t* nums = numberline(strlen(lbuf)+1, lbuf, &n, 0);
            int ret = fprintnumbers(stdout, "%#2x", "\t", n, nums);
            if (ret < 0) return EXIT_FAILURE;
            free(nums);
        } else {
            if (lbuf[0]) { /* a partial line has been read */
                for (;;) {
                    int c = getc(stdin);
                    if (c == EOF) return EXIT_FAILURE;
                    if (c == '\n') {
                        fprintf(stderr, "line_too_long:_%s\n", lbuf);
                        break;
                    }
                }
            } else break; /* regular end of input */
        }
    }
}