#include <stdio.h>

int main(int argc, char const *argv[])
{
    char * delim = "!!";

    printf("delim[0] = %c\n", *delim);
    printf("delim[1] = %c\n", *(delim + 1));
    printf("delim[2] = %c\n", *(delim + 2));

    for (int i = 0; i < 3; i++) {
        if (*(delim + i) == '\0')
            printf("delim[i] = %s\n", "NULL");
        else 
            printf("delim[i] = %c\n", *(delim + i));
    }

    printf("size: %d", strlen("!!"));

    char *strs[5];

    for (int i = 0; i < 5; i++) {
        strs[i] = "Hello";
        for (int j = 0; j < strlen("Hello"); j++) {
        printf("*str[%d] = %c\n", j, *(strs[j] + j));
        }
        printf("str[%d] = %s\n", i, strs[i]);
    }
    
    return 0;
}
