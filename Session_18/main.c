// realloc() =  Reallocation.
//              Resize previously allocated memory
//              realloc(ptr, bytes)
//              it is the same concept as `dynamic arrays` in other programming languages.


#include <stdio.h>
#include <stdlib.h>

int main(){

    int number = 0;
    printf("Enter the number of prices: ");
    scanf("%d", &number);
    float *prices = malloc(number * sizeof(float));
    if(prices == NULL){
        printf("Failed to allocated memory to the `prices`!\n");
        return 1;
    }
    for(int i = 0; i < number; i++){
        printf("Please enter the #%d price:\t", i+1);
        scanf("%f", &prices[i]);
        printf("\n");
    }
    for(int i = 0; i < number; i++){
        printf("$%.2f, ", prices[i]);
    }
    printf("\n");

    // Suppose now we want to either increase the size of our dynamic array or decrease it, we use `realloc()`.

    int newNumber = 0;
    printf("Enter a new number of prices: ");
    scanf("%d", &newNumber);
    float *temp = realloc(prices, newNumber * sizeof(float));           // `realloc()` also frees up the old memory that was allocated using `malloc()`.
    if(temp == NULL){
        printf("Failed to reallocate memory to prices!\n");
    }
    else{
        prices = temp;
        temp = NULL;
        for(int i = number; i < newNumber; i++){
            printf("Please enter the #%d price:\t", i+1);
            scanf("%f", &prices[i]);
            printf("\n");
        }
        for(int i = 0; i < newNumber; i++){
            printf("$%.2f, ", prices[i]);
            }
        printf("\n");
    }




    free(prices);
    prices = NULL;

    return 0;
}