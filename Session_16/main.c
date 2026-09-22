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


    for(int i = 0; i < numberOfGrades ; i++){
        char* seq = (i%10 == 0 && i != 10)? "st" : (i%10 == 1 && i != 11)? "nd" : (i%10 == 2 && i != 12)? "rd" : "th";
        printf("Please enter the %d%s grade:\t", i+1, seq);
        scanf("%d", &grades[i]);
        printf("\n");
    }

    printf("Grades:\n");
    for(int i = 0; i < numberOfGrades; i++){
        printf("%d, ", grades[i]);
    }
    printf("\n");


    free(grades);                                           // freeing up the space we dynamically allocated.
    grades = NULL;                                          // avoiding having `dangling pointer`

    return 0;
}