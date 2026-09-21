// Compund Interest Calculator

//      Amount = Principal * (1 + rate/number of times interest is compunded per year)^(number of times interest is compunded per year * years)
//      
//      A = P(1 + r/n)^(n * t)

#include <stdio.h>
#include <math.h>

int main(){

    double principal = 0.0;
    double interestRate = 0.0;
    int years = 0;
    int timesCompunded = 0;
    double total = 0.0;

    printf("Compund Interest Calculator\n");
    
    printf("Enter the principal please (P):\t");
    scanf("%lf", &principal);

    printf("\nPlease enter the Interest Rate (r):\t");
    scanf("%lf", &interestRate);

    printf("\nPlease enter the number of compunds per year (n):\t");
    scanf("%d", &timesCompunded);

    printf("\nPlease enter the number of years you want to compund (t):\t");
    scanf("%d", &years);

    total = principal * pow((1 + (interestRate / timesCompunded)), (timesCompunded * years));

    printf("\n====================\nYour total amount after compunding for %d years is: %.2lf", years, total);
    printf("\n====================\n");



    return 0;
}