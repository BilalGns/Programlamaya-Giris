#include <stdio.h>

//-- Girilen N değerine göre NxN matris oluşturup 1’den NxN’e kadar sayıları aşağıdaki sırayla yerleştiriniz. N=3 girilirse:
//  1 6 7
//  2 5 8
//  3 4 9


int main(){

    int n;
    int counter = 1;

    printf("Enter a number : ");
    scanf("%d" , &n);

    int matrix[n][n];

    for (int i = 0; i < n; i++){

        if (i % 2 == 0){
            for (int j = 0; j < n; j++){
                matrix[j][i] = counter;
                counter++;
            }
        } else {
            for (int j = n - 1; j >= 0; j--){
                matrix[j][i] = counter;
                counter++;
            }
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", matrix[i][j]);
        } 
        printf("\n");
    }
    

    return 0;
}