#include <stdio.h>

//-- 1’den 10’a kadar olan sayıları ve karelerini matris olarak oluşturup yazdırınız.(1.sütunda sayılar, 2.sütunda kareleri olacaktır)

//  ___ ___
// |_1_|_1_|
// |_2_|_4_|
// |_3_|_9_|

int main(){

    int numbers[10][2];
    int counter = 1;

    for (int i = 0; i < 10; i++){
        numbers[i][0] = counter;

        numbers[i][1] = counter*counter;
        counter++;
    }
    
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 2; j++){
            printf(" | %d | ", numbers[i][j]);
        } printf("\n");
    }

    return 0;
}