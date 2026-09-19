# include <stdio.h>

int main(){

    // variable = A reusable container for a value. Behaves as if it were the value it contains.

    printf("\n\n========== Integers ==========\n\n");

    int age = 21;
    printf("You are %d years old\n.", age);

    int year = 2026;
    printf("The year is %d.\n", year);

    int quantity = 7;
    printf("You ordered %d computers from our store!\n", quantity);

    printf("\n\n========== Floats ==========\n\n");

    float gpa = 3.5;
    printf("Your GPA is %f.\n", gpa);

    float price = 19.99;
    printf("The price of the product is $%.2f.\n", price);

    float temp = -7.1;
    printf("The temperature outside is %.1f°.", temp);

    printf("\n\n========== Doubles ==========\n\n");

    double pi = 3.14159265358979;
    printf("The pi number is %.15lf.\n", pi);

    double e = 2.7182818284590;
    printf("The value of e is %.15lf.\n", e);

    

    return 0;
}