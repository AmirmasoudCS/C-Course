// calloc() =   Contiguous Allocation.
//              Allocates memory dynamically and sets all allocated bytes to 0.
//              malloc() is faster, but calloc() leads to less bugs.
//              calloc(#, size)

#include <stdio.h>
#include <stdlib.h>


int main(){

    int numberOfPlayers = 0;
    printf("Please enter the number of players:\t");
    scanf("%d", &numberOfPlayers);
    printf("\n");

    int *scores = malloc(numberOfPlayers * (sizeof(int)));
    if(scores == NULL){
        printf("Failed to allocate memory to scores!\n");
        return 1;
    }
    for(int i = 0; i < numberOfPlayers; i++){
        printf("%d, ", scores[i]);
    }
    printf("\n\n");

    free(scores);
    scores = NULL;

    scores = calloc(numberOfPlayers, sizeof(int));
    if(scores == NULL){
        printf("Failed to allocate memory to scores!\n");
        return 1;
    }
    for(int i = 0; i < numberOfPlayers; i++){
        printf("%d, ", scores[i]);
    }
    printf("\n\n");

    return 0;
}