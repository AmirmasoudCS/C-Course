// Working with files in C
#include <stdio.h>


int main(){


    FILE *pFile = fopen("./output.txt", "w");
    if(pFile == NULL){
        printf("Failed to open the file!\n");
        return 1;
    }



    fclose(pFile);


    return 0;
}