#include <stdio.h>
#include <stdlib.h>

// Kullanıcıdan 5 adet 4 basamaklı sayı alınıp bir diziye aktarıldıktan
// sonra bu sayılar matrisOlustur isimli fonksiyona gönderilecektir. Bu
// fonksiyon kendisine gönderilen sayıların her birini basamaklarına ayırıp
// boş bir matrise yerleştirecektir. Bu işlem için gerekli kodu yazınız.

void matrisOlustur(int matris[5][4], int sayi, int sira);

int main(){

    int sayi;
    int matris[5][4];
    int sayac = 0;

    do {
        printf("%d. sayiyi girin : ", sayac+1);
        scanf("%d" , &sayi);

        if ((sayi >= 1000 && sayi <= 9999)){
            matrisOlustur(matris, sayi, sayac);
            sayac++;
        }

    } while (sayac < 5);
    
    printf("\n");
    
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 4; j++){
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

void matrisOlustur(int matris[5][4], int sayi, int sira){

    int i = 3;
    int basamak;

    do {
        basamak = sayi % 10;
        matris[sira][i] = basamak;
        sayi /= 10;
        i--;
    } while (sayi > 0);
}