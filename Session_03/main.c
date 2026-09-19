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


    printf("\n\n");
    // Width

    int num1 = 1, num2 = 10, num3 = -100;

    printf("%+04d\n", num1);
    printf("%+04d\n", num2);
    printf("%+d\n", num3);

    printf("\n\n");
    // Precision

    float price1 = 19.99, price2 = 1.50, price3 = -100.00;

    printf("%+7.2f\n", price1);
    printf("%+07.2f\n", price2);
    printf("%+7.2f\n", price3);


    return 0;
}