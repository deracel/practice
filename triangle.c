#include <stdio.h>

int main(){
    int cols = 13;
    int rows = 10;
    char array[rows][cols];
    int k = 0;
    for (int i = 0; i < rows; ++i){
        for (int j = 0; j < cols; ++j){
            array[i][j] = ' ';
            if (i < 6){
                array[i][cols/2 + k] = '*';
                array[i][cols/2 - k] = '*';
            }
            if (i == 6){
                array[i][j] = '*';
            }
        }
        k++;
    }
    for (int i = 0; i < rows; ++i){
        for (int j = 0; j < cols; ++j){
            printf("%c", array[i][j]);
        }
        printf("\n");
    }
    return 0;

}