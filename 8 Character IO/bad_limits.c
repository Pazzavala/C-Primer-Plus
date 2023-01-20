
#include <stdio.h>
#include <stdbool.h>

bool bad_limits(long begin, long end, long low, long high);

int main() {
    bool result = bad_limits(5, 10, 2, 99);
    printf("%s\n", (result) ? "true" : "False");

    result = bad_limits(10, 5, 2, 99);
    printf("%s\n", (result) ? "true" : "False");

    return 0;
}

bool bad_limits(long begin, long end, long low, long high) {
    bool not_good = false;

    if (begin > end) {
        printf("%ld is not smaller than %ld.\n", begin, end);
        not_good = true;
    }

    if (begin < low || end < low) {
        printf("Values must be %ld or grater.\n", low);
        not_good = true;
    }

    if (begin > high || end > high) {
        printf("Values must be %ld or less.\n", low);
        not_good = true;
    }

    return not_good;
}
