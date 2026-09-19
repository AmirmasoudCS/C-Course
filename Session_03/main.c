#include <stdio.h>
#include <stdbool.h>

int main(){

    // Format Specifiers = Special tokens that begin with a `%` symbol,    
    //                      followed by a `character` that specifies the data type
    //                      and optional modifiers (width, precision, flags).
    //                      They control how data is displayed or interpreted.

    int age = 21;                   // %d
    float price = 19.99;            // %f
    double pi = 3.1415926535;       // %lf
    char currency = '$';            // %c
    char name[] = "Amirmasoud";     // %s



    printf("age:\t\t%d\nprice:\t\t%f\npi:\t\t\t%.14lf\ncurrency:\t%c\nname:\t\t%s\n", age, price, pi, currency, name);


    return 0;
}