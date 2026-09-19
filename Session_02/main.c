#include <stdio.h>
#include <stdbool.h>

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

    printf("\n\n========== Characters ==========\n\n");

    char grade = 'A';
    printf("Your grade is %c in the exam.\n", grade);

    char symbol = '!';
    printf("Your favourite symbol is %c.\n", symbol);

    char currency = '$';
    printf("The currency is %c.\n", currency);

    printf("\n\n========== Strings (Array of characters in C) ==========\n\n");

    char name[] = "Amirmasoud";
    printf("My name is %s.\n", name);
    
    char favFood[] = "Pizza";
    printf("My favorite food is %s.\n", favFood);

    char email[] = "fake12345@gmail.com";
    printf("Your email is %s.\n", email);

    printf("\n\n========== Booleans ==========\n\n");

    bool isOnline = true;
    printf("%d.\n", isOnline);
    if(isOnline){
        printf("Your are online!.\n");
    }


    return 0;
}