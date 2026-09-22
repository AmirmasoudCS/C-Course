// Working with files in C
#include <stdio.h>


int main(){


    FILE *pFile = fopen("./output.txt", "w");
    if(pFile == NULL){
        printf("Failed to open the file!\n");
        return 1;
    }

    char text[] = "“Yes,there are two paths you can go by, but in the long run, there's still time to change the road you're on.”\n― Led Zeppelin\n";

    fprintf(pFile, "%s", text);
    printf("File was successfully written!\n");


    fclose(pFile);


    return 0;
}