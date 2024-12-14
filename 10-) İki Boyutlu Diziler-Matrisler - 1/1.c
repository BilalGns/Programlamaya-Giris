#include <stdio.h>

//-- 2x2 boyutunda bir matrisin değerlerini kullanıcıdan alarak matris şeklinde yazdırınız.

int main(){

    int numbers[2][2];

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            printf("Enter a number : ");
            scanf("%d" , &numbers[i][j]);
        }
    }

    printf("\n");

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    return 0;
}