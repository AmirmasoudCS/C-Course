// malloc() = A function in C that dynamically allocates a specified number of bytes in memory. (Memory Allocation)

#include <stdio.h>
#include <stdlib.h>

int main(){

    int numberOfGrades = 0;
    printf("Please enter the number of grades you wish to input:\t");
    scanf("%d", &numberOfGrades);

    int *grades = malloc(numberOfGrades * sizeof(int));      // dynamically allocating memory for the grades array user is going to input.
    if(grades == NULL){
        printf("Failed to allocate memory!\n");
        return 1;
    }


    free(grades);                                           // freeing up the space we dynamically allocated.
    grades = NULL;                                          // avoiding having `dangling pointer`

    return 0;
}