#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//-- 0-10 arası rastgele sayılardan oluşan 4x4 bir matrisin köşegenlerini yer değiştiren kodu yazınız(başka matris kullanmadan)

int main(){

    srand(time(NULL));

    int matrix[4][4];

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            matrix[i][j] = rand() % 9 + 1;
            printf("%d ", matrix[i][j]);
        } printf("\n");
    }
    

    for (int i = 0; i < 4; i++){
        int temp = matrix[i][i];
        matrix[i][i] = matrix[i][3-i];
        matrix[i][3-i] = temp;
    }   

    printf("\n\n");

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            printf("%d ", matrix[i][j]);
            
        } printf("\n");
    } 

    printf("\n");

    return 0;
}