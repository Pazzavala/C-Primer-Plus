
#include <stdio.h>
long get_long(void);

int main() {
    long num = get_long();

    printf("%ld", num);

    return 0;
}

long get_long(void) {
    int input;
    char ch;

    while (scanf("%ld", &input) != 1) {
        while ((ch = getchar()) != '\n')
            putchar(ch);
        printf(" is not an integer.\nplease enter a integer: ");
    }

    return input;
}