#include <stdio.h>

//-> Parametre olarak gönderilen bir diziyi yazdıran fonksiyon.(eleman sayısı da gönderilecektir. void diziYazdir(int dizi[],int elemanSayi)

void diziYazdir(int dizi[], int elemanSayi);

int main(){

    int array[] = {3,5,2,7,8,1};
    diziYazdir(array, 6);

    return 0;
}

void diziYazdir(int dizi[], int elemanSayi){

    for (int i = 0; i < 6; i++){
        printf("%d ", dizi[i]);
    }
}