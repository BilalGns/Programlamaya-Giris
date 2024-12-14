#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//-- Matris Toplama: 3x2 boyutunda 2 adet matris tanımlayıp her bir matrisin elemanlarını 10-30 arası rastgele sayılarla doldurduktan sonra 
//-- bu iki matrisi toplayarak toplam matrisini elde edip yazdırınız.

int main(){

    srand(time(NULL));

    int matrix1[2][2] = {0};
    int matrix2[2][2] = {0};
    int sum[2][2] = {0};

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){

            matrix1[i][j] = rand() % 19 + 11;
            matrix2[i][j] = rand() % 19 + 11;
        }
    }

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Sum : \n");
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            printf("%d ", sum[i][j]);
        } printf("\n");
    }

    return 0;
}