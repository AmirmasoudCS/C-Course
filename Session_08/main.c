#include <stdio.h>

    // array = A fixed-size collection of elements of the same data type (Similar to a variable, but it holds more than 1 value)


int main(){

    int numbers[] = {10, 20, 30, 40, 50};
    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    for(int i = 4; i > 0; i--){
        printf("From %d to %d is %c grade.\n", numbers[i-1], numbers[i], grades[4-i]);
    }
    printf("From 0 to 10 is F grade.");
    

    return 0;
}