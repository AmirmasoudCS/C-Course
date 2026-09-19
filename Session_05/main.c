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

    // Getting input from the user

    printf("Please enter your age:\t");
    scanf("%d", &age);                          // `&<variable>` means at the address of <variable> 
    printf("\nPlease enter your gpa:\t");
    scanf("%f", &gpa);
    printf("\nEnter your grade:\t");
    scanf(" %c", &grade);                           // If we don't clear our input buffer before accepting this `grade` variable, the grade buffer will get `\n` since it was leftover in the input buffer.
                                                    // We can add a `space` before our `%` in the `scanf()` function.
    printf("\nEnter your first name:\t");
    scanf("%s", &name);                             // If we add space to the `scanf()` function, since the function can't read the white spaces, it will stop reading when encountering a white space.
    printf("%s\n", name);                           // A solution to this is to use the function `fgets()` instead of `scanf()` function.
                                                    // `fgets()` function stands for `file get string`.
    printf("\nPlease enter your full name:\t");
    getchar();                                      // `getchar()` function helps us clear the input buffer.
    fgets(name, sizeof(name), stdin);




    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);
    printf("%s\n", name);

    return 0;
}