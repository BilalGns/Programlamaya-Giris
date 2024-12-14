#include <stdio.h>

//-> Parametre olarak gönderilen bir tamsayı dizisindeki en büyük elemanı döndüren fonksiyon.

int bigNumber(int numbers[], int length);

int main(){

    int numbers[] = {23,11,56,29,12,45,67,89,30};

    printf("Big Number : %d ", bigNumber(numbers, 9));

    return 0;
}

int bigNumber(int numbers[], int length){

    int bigNumber = 0;

    for (int i = 0; i < length; i++){
        if(numbers[i] > bigNumber){
            bigNumber = numbers[i];
        }    
    }
    
    return bigNumber;
}