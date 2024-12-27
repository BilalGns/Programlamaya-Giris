#include <stdio.h>
#include <stdlib.h>

//-> Girilen 5 sayıyı bir diziye aktardıktan sonra bu diziyi fonksiyona gönderip 
//-> dizideki en büyük ve en küçük sayı ile dizi toplamını bulup sonuçları main içinde yazdırınız.

void calculate(int *numbers, int *max, int *min, int *sum);

int main(){

    int numbers[5];

    for (int i = 0; i < 5; i++){
        printf("Enter %d. number : ", i+1);
        scanf("%d" , &numbers[i]);
    }

    int max = 0, min = numbers[0], sum = 0; 

    calculate(numbers, &max, &min, &sum);
    
    printf("Sum : %d\n", sum);
    printf("Max : %d\n", max);
    printf("Min : %d", min);

 
    return 0;
}

void calculate(int *numbers, int *max, int *min, int *sum){

    for (int i = 0; i < 5; i++){
        *sum += numbers[i];

        if (numbers[i] > *max){
            *max = numbers[i];
        }

        if (*min > numbers[i]){
            *min = numbers[i];
        }  
    }
}