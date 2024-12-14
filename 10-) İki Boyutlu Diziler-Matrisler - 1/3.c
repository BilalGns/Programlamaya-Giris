#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//-- 0-100 arası rastgele sayılardan oluşturulan 4x4 bir matristeki en büyük, en küçük ve ortalama sayıyı bulunuz.

int main(){

    srand(time(NULL));

    int numbers[4][4];
    int maxNumber = 0, minNumber = 100;
    float average = 0;

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){

            numbers[i][j] = rand() % 99 +1;
            average += numbers[i][j];

            if (numbers[i][j] > maxNumber){
                maxNumber = numbers[i][j];
            }

            if (numbers[i][j] < minNumber){
                minNumber = numbers[i][j];
            }   
        }
    }
    
    printf("Average : %.2f\n", average / 16.0);
    printf("Big number : %d\n", maxNumber);
    printf("Min number : %d\n", minNumber);

    return 0;
}