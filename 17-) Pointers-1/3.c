#include <stdio.h>
#include <stdlib.h>

//-> Verilen 2 sayıdan büyük olan sayı küçük sayıya bölünerek bölüm ve kalanı bulan fonksiyonu yazınız. 
//-> (Sayıları alma ve bölüm/kalan sonuçları yazdırma işlemleri “main” içinde yapılacaktır.)

void division(int bigNumber, int smallNumber, int *bolum, int *kalan);

int main(){

    int bigNumber, smallNumber, bolum, kalan;
    
    printf("Enter a first number : ");
    scanf("%d" , &bigNumber);

    printf("Enter a second number : ");
    scanf("%d" , &smallNumber);

    if (smallNumber > bigNumber){
        int temp = smallNumber;
        smallNumber = bigNumber;
        bigNumber = temp;
    }
    
    division(bigNumber, smallNumber, &bolum, &kalan);

    printf("Bolum : %d\n", bolum);
    printf("Kalan : %d", kalan);
 
    return 0;
}

void division(int bigNumber, int smallNumber, int *bolum, int *kalan){

    *bolum = bigNumber / smallNumber;
    *kalan = bigNumber % smallNumber;
}