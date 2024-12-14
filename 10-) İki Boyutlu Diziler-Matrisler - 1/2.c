#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//-- 0-100 arası rastgele sayılardan oluşturulan 3x3 bir matriste 50 den büyük kaç tane sayı olduğunu bulunuz.

int main(){

    srand(time(NULL));

    int numbers[3][3];
    int result = 0;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            numbers[i][j] = rand() % 99 + 1;

            if (numbers[i][j] > 50)
                result++;
        }
    }
    
    printf("Number of numbers greater than 50 : %d", result);

    return 0;
}