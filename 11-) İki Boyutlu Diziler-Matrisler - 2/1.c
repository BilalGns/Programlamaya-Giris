#include <stdio.h>

//-> Girilen N değerine göre NxN matris oluşturup 1’den NxN’e kadar sayıları sırayla yerleştiriniz.

int main(){

    int N;
    int counter = 1;

    printf("Enter a number : ");
    scanf("%d" , &N);

    int numbers[N][N];

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            numbers[i][j] = counter;
            counter++;
        }
    }

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            printf("%d  ", numbers[i][j]);
        } printf("\n");  
    }

    return 0;
}