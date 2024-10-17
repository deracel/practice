#include <stdio.h>


int main(){
    const int rows = 6;
    const int cols = 6;
    char array[rows][cols];
    for (int i = 0; i < rows; ++i){
        for (int j = 0; j < cols; ++j){
            if(i == 0 || i == rows - 1)
                array[i][j] = '*';
            else{
                array[i][j] = ' ';
            }
            if(j == 0 || j == cols - 1){
                array[i][j] = '*';
            }           
        }
    }
    for (int i = 0; i < rows; ++i){
        for (int j = 0; j < cols; j++){
            printf("%c", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}