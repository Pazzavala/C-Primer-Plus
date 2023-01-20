// an inefficient and faulty number guesser

#include <stdio.h>

int main() {

    int guess = 1;

    printf("if i guess your number respond y else n if wrong.\n");

    do {
        printf("Is your number %d\n", guess);
        guess++;
    } while (getchar() != 'y');

    printf("GOT IT!!");
    
    return 0;
}
/*          OUTPUT:
    if i guess your number respond y else n if wrong.
    Is your number 1
    n
    Is your number 2
    Is your number 3
    n
    Is your number 4
    Is your number 5
    n
    Is your number 6
    Is your number 7
    y
    GOT IT!!
*/