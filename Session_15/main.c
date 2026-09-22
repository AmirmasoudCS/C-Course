// Working with files in C

#include <stdio.h>


int main(){


    FILE *pFile = fopen("./output.txt", "w");
    if(pFile == NULL){
        printf("Failed to open the file!\n\n");
        return 1;
    }

    char text[] = "Yes,there are two paths you can go by, but in the long run, there's still time to change the road you're on.\n- Led Zeppelin\n";

    fprintf(pFile, "%s", text);
    printf("File was successfully written!\n");


    fclose(pFile);


    pFile = fopen("./output.txt", "r");
    if(pFile == NULL){
        printf("Failed to open the file!\n");
        return 1;
    }

    char line[256];
    while(fgets(line, sizeof(line), pFile)){
        printf("%s", line);
    }

    printf("\nFile was read successfully!\n");
    fclose(pFile);
    printf("File was closed successfully!\n");




    return 0;
}