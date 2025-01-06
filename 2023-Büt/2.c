#include <stdio.h>
#include <stdlib.h>

// Parametre olarak gönderilen N elemanlı bir dizide baştan ve
// sondan karşılıklı elemanları birbiri ile toplayıp elde edilen toplam
// değerlerini toplam isimli başka bir diziye aktardıktan sonra toplam
// dizisini yazdıran diziToplamBul isimli bir fonksiyon yazınız.(ilk
// elemanla son elemanın toplamı, ikinci elemanla sondan ikinci elemanın
// toplamı, üçüncü elemanla sondan üçüncü elemanın toplamı…) (Not: N
// tek sayı ise ortadaki elemanın karşılığı olmadığı için ortadaki sayının kendisini
// toplam dizisine aktarmalıdır. Sadece istenen fonksiyon yazılacak, main
// fonksiyonu yazılmayacaktır.)

void diziToplamBul(int sayilar[], int N);

int main(){

    int sayilar[] = {1,6,12,11,9,1,3,5,8};

    diziToplamBul(sayilar, 9);
 
    return 0;
}

void diziToplamBul(int sayilar[], int N){

    int toplam[N/2];
    int sayac = 0;

    for (int i = 0; i < N/2; i++){
        toplam[i] = sayilar[i] + sayilar[N-i-1];
        sayac++;
    }

    if (N % 2 == 1){
        toplam[sayac] = sayilar[N/2];
        sayac++;
    }
    
    for (int i = 0; i < sayac; i++){
        printf("%d ", toplam[i]);
    }
}