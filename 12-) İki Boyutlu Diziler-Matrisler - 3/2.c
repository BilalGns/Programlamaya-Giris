#include <stdio.h>

//-- Matris Skaler Çarpım: 2x2 boyutunda bir matris elemanlarını ve matrisle çarpılacak tamsayı
//-- değerini kullanıcıdan aldıktan sonra çarpma işlemini gerçekleştirip sonuç matrisini elde ediniz ve yazdırınız.

int main(){

    int matrix[2][2];
    int x = 0;

    printf("Enter numbers for matrix :\n");
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            printf("matrix[%d][%d]= ", i, j);
            scanf("%d" , &matrix[i][j]);
        }
    }

    printf("Enter the number to multiply : ");
    scanf("%d" , &x);
    
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            matrix[i][j] *= x;
            printf("%d ", matrix[i][j]);
        } printf("\n");
    }

    return 0;
}