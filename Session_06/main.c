// Shopping Cart project


#include <stdio.h>
#include <stdbool.h>

int main(){

    char productName[50] = "";
    float productPrice = 0.0f;
    int amount = 0;

    printf("Please enter the product name:\t");
    scanf("%s", &productName);

    printf("Please enter the product price:\t");
    scanf(" %f", &productPrice);

    printf("Please enter the amount of products you want:\t");
    scanf("%d", &amount);

    printf("You are buying %d amount of %s, which each cost $%.2f.\nIt brings your total to: $%.2f", amount, productName, productPrice, amount*productPrice);

    return 0;
}