// 2D arrays = An array where each element is an array
//      array[][] = {{}, {}, {}};

#include <stdio.h>

int main(){

    int numbers[][3] = {    {1, 2, 3}, 
                            {4, 5, 6},
                            {7, 8, 9}
                        };                  // In multi dimension arrays declaration only the first dim can have empty declaration of size, all other dims like columns or any higher dims sizes must be declared.
                        
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d\t", numbers[i][j]);
        }
    }

    return 0;
}