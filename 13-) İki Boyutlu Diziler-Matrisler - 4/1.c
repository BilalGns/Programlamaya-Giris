#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//-> 3x3 boyutunda bir matris elemanları kullanıcıdan alındıktan sonra matrisin köşegene göre simetrik olup olmadığını bulunuz.


int main(){

    int matrix[3][3];
    int control = 1;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d" , &matrix[i][j]);
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (matrix[i][j] != matrix[j][i]){
                control = 0;
                break;
            }
        }
    }   

    control? printf("The matrix is symmetrical") : printf("The matrix is not symmetrical");

    return 0;
}