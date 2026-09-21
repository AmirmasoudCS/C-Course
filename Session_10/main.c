// Ternary Operator = A shorthand for using if-else statements
//
//          (condition)? if_true : if_false;


#include <stdio.h>
#include <string.h>

void whosOlder(char name1[], char name2[]) {
    printf("%s is older than %s.\n", name1, name2);
}

int main() {

    char name1[50] = "";
    char name2[50] = "";
    int age1 = 0, age2 = 0;

    printf("Please enter the first name:\n");
    fgets(name1, sizeof(name1), stdin);
    name1[strcspn(name1, "\n")] = '\0';

    printf("Please enter the age of %s:\n", name1);
    scanf("%d", &age1);
    getchar();

    printf("\nPlease enter the second name:\n");
    fgets(name2, sizeof(name2), stdin);
    name2[strcspn(name2, "\n")] = '\0';

    printf("Please enter the age of %s:\n", name2);
    scanf("%d", &age2);

    printf("\n");

    (age1 >= age2)
        ? whosOlder(name1, name2)
        : whosOlder(name2, name1);

    return 0;
}