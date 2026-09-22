// pointer =    A variable that stores the memory address of another variable.
//              Benefit: They help avoid wasting memory by allowing you to pass the address of a large data structure instead of copying the entire data.

#include <stdio.h>

int main(){

    int age = 25;

    printf("The address of `age` variable is: %p", &age);


    return 0;
}