// struct =     A custom container that holds multiple pieces of related information.
//              It is similar to Objects in other programming languages.

#include <stdio.h>
#include <stdbool.h>
struct Student{

    char name[50];
    float grade;
    int age;
    bool isFullTime;

};

int main(){

    struct Student student1 = {"Amirmasoud", 17, 21, true};
    char* fullTime = (student1.isFullTime)? "Is full time student" : "Is not full time student";
    printf("Student Information:\nName:\t%s\nGrade:\t%.2f\nAge:\t%d\n%s\n", student1.name, student1.grade, student1.age, fullTime);


    return 0;
}