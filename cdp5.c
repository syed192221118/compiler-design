#include <stdio.h>
#include <ctype.h>

int main() {
    char input[1000];
    int whitespace_count = 0,i;
    int newline_count = 0;

    printf("Enter a string:\n");
    fgets(input, sizeof(input), stdin);

    for (i = 0; input[i] != '\0'; i++) {
        if (isspace(input[i])) {
            if (input[i] == ' ') {
                whitespace_count++;
            } else if (input[i] == '\n') {
                newline_count++;
            }
        }
    }
   printf("Number of white space count: %d",whitespace_count);
   printf("Number of New line : %d",newline_count);
    return 0;
}

