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



    return 0;
}