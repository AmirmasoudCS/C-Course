#include <stdio.h>
#include <stdbool.h>

int main(){

    // arithmetic operators =    `+`    `-`     `*`     `/`      `%`     `++`    `--`

    int x = 2, y = 3, z = 0;

    z = x + y;
    printf("x + y = %d\n", z);

    z = x - y;
    printf("x - y = %d\n", z);

    z = x * y;
    printf("x * y = %d\n", z);

    z = x / y;
    printf("x / y = %d\n", z);

    z = x % y;
    printf("x %% y = %d\n", z);

    z = ++x;
    printf("++x = %d\n", z);

    z = --x;
    printf("--x = %d\n", z);

    return 0;
}