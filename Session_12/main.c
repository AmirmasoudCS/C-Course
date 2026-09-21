// enums =  A user-defined data type that consists of a set of named integer constants.
//          benefits: Replaces numbers with readable names.

#include <stdio.h>
#include <ctype.h>

enum Day{

    MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY

};

int main(){

    char weekdays[7][50] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    for(int i = 0; i < 7; i++){
        printf("%s is %d.\n", weekdays[i], (enum Day)i);
    }

    enum Day today = MONDAY;
    printf("Today is %d.\n\n", today);

    (today == SATURDAY || today == SUNDAY)? printf("It is weekend!\n") : printf("It is weekday :(\n");

    return 0;
}