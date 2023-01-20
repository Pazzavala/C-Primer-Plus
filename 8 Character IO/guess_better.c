#include <stdio.h>

int main() {

    int guess = 1;

    printf("if i guess your number respond y else n if wrong.\n");
    printf("Is your number %d\n", guess);

    while (getchar() != 'y') {
        printf("Is your number %d\n", ++guess);

        while (getchar() != '\n');
            continue;
    }

    printf("GOT IT!!");
    
    return 0;
}