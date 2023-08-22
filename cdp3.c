#include <stdio.h>
#include <ctype.h>

int main(void) {
    int c;
    int in_comment = 0;
    while ((c = getchar()) != EOF) {
        if (in_comment) {
            if (c == '*') {
                c = getchar();
                if (c == '/') {
                    in_comment = 0;
                }
            }
        } else {
            if (c == '/') {
                c = getchar();
                if (c == '*') {
                    in_comment = 1;
                } else {
                    putchar('/');
                    putchar(c);
                }
            } else if (!isspace(c)) {
                putchar(c);
            }
        }
    }
    return 0;
}

