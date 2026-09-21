// typedefs = help with renaming the already existing data type names

//  typedef existing_type_name new_name;

#include <stdio.h>

typedef long long ll;

int main(){

    ll number1 = 0.0;
    long long number2 = 0.0;


    printf("Size of long long is: %llf.\n", number2);
    printf("Size of ll is: %llf.\n", number2);

    (sizeof(number1) == sizeof(number2))? printf("They are the SAME size.\n") : printf("They are NOT the SAME size.\n");

    return 0;
}