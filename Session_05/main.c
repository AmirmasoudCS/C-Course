#include <stdio.h>

int main(){

    int age;
    float gpa;
    char grade;
    // char name[30];      // Since we are not declaring the value of `name` right away, we need to declare its size. In this case it is `30`.

    // Using variables that are not declared can lead to undefined behavior.
    // So it is good practice to assign default variables when declaring them.

    age = 0;
    gpa = 0.0f;
    grade = '\0';           // Null Terminator : clears out whatever was stored inside our `grade` variable.
    char name[30] = "";     // An empty string that still  has 30 bytes as space.

    printf("%d\n", age);
    printf("%f\n", gpa);
    printf("%c\n", grade);
    printf("%s\n", name);



    return 0;
}