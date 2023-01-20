#include <stdio.h>
#include <string.h>
#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40
#define SPACE ' '

void show_n_char(char ch, int num);

int main() {
    int spaces;
    
    show_n_char('*', WIDTH);
    putchar('\n');

    show_n_char(SPACE, 12);  // Passing a constant
    printf("%s\n", NAME);

    spaces = (WIDTH - strlen(ADDRESS)) / 2;
    show_n_char(SPACE, spaces);  // Passing a variable
    printf("%s\n", ADDRESS);

    show_n_char(SPACE, (WIDTH - strlen(ADDRESS)) / 2);  // Passing a n expression
    printf("%s\n", PLACE);
    show_n_char('*', WIDTH);
    putchar('\n');

    return 0;
}

void show_n_char(char ch, int num) {
    int count;

    for (count = 1; count <= num; count++)
        putchar(ch);
}