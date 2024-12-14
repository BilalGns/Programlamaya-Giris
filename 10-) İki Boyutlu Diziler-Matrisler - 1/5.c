#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//-> 0-10 arası rastgele sayılardan oluşan 4x4 bir matrisin köşegen toplamlarını bulunuz.

int main(){

    srand(time(NULL));

    int numbers[4][4];
    int rightToLeft = 0;
    int leftToRight = 0;


    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            numbers[i][j] = (rand() % 9) + 1;
        }
    }
    

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            if (i == j){
                rightToLeft += numbers[i][j];
            }if (i + j == 3) {
                leftToRight += numbers[i][j];
            }

            
            printf("%d  ", numbers[i][j]);
        } printf("\n");
    }

    printf("Right to left : %d\n", rightToLeft);
    printf("Left to Right : %d", leftToRight);

    return 0;
}

