#include <stdio.h>

int main(){
    int cols = 15;
    int rows = 10;
    char array[rows][cols];
    for (int i = 0; i < rows; ++i){
        for (int j = 0; j < cols; ++j){
            array[i][j] = ' ';
        }
    }
    for (int i = 0; i < rows; ++i){
        for (int j = 0; j < cols; ++j){
            if(i % 2 == 0 && i < 5){
                int k = -1 * (i + 1);
                while (k < i + 2){
                    array[i][7 + k] = '*';
                    ++k;
                }
            }
            if (i == 6){
                int k = -1 * (4 + 1);
                while (k < 4 + 2){
                    array[i][7 + k] = '*';
                    ++k;  
                }
            }
        }
    }
    for (int i = 0; i < rows; ++i){
        for (int j = 0; j < cols; ++j){
            if (((i > 4) && (j == 2 || j == 4 || j == 6 || j == 8 || j == 10 || j == 12)) || ((i > 2 && i < 5) && (j == 4 || j == 6 || j == 8 || j == 10)) || ((i < 2) && (j == 6 || j == 8))){
                array[i][j] = '*';
            }
        }
    }
    for (int i = 0; i < rows; ++i){
        for (int j = 0; j < cols; ++j){
            if (i > 6){
                array[i][j] = ' ';
            }
        }
    }
    printf("       *      \n");
    printf("     *****      \n");
    printf("       *      \n");
    printf("       *      \n");
    printf("       *      \n");
    for (int i = 0; i < rows; ++i){
        for (int j = 0; j < cols; ++j){
            printf("%c", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
