// Ternary Operator = A shorthand for using if-else statements
//
//          (condition)? if_true : if_false;


#include <stdio.h>

void whosOlder(char name1[], char name2[]){
    for(int i = 0; i < sizeof(name1); i++){
        printf("%c", name1[i]);
    }
    printf(" is older than ");
    for(int j = 0; j < sizeof(name2); j++){
        printf("%c", name2[j]);
    }
    printf(".\n");
}

int main(){

    char name1[50] = "", name2[50] = "";
    int age1 = 0, age2 = 0;

    printf("Please enter the first name:\n");
    fgets(name1, sizeof(name1), stdin);
    char ch = getchar();
    printf("Please enter the age of %s.\n", name1);
    scanf("%d", age1);
    printf("\n");

    printf("Please enter the second name:\n");
    fgets(name2, sizeof(name2), stdin);
    ch = getchar();
    printf("Please enter the age of %s.\n", name2);
    scanf("%d", age2);
    printf("\n");

    (age1 >= age2)? whosOlder(name1, name2) : whosOlder(name2, name1);

    return 0;
}