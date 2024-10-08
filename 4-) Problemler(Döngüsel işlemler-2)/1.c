#include <stdio.h>

//? Verilen bir sayının tam bölenlerini bulan algoritma.

int main(){

    int number;

    printf("Enter a number : ");
    scanf("%d", &number);

    printf("Integer divisors : ");
    for (int i = 1; i <= number/2; i++){
        if (number % i == 0) {
            printf("%d - ", i);
        }   
    }

    printf("%d", number);
    
    return 0;
}

// 1. Başla
// 2. Bir tam sayı al (tam bölenleri bulunacak sayı)
//     2.1 1'den n/2 'e kadar olan sayılar arasında dolaş
//     2.2 Her bir sayı i için n mod i işlemini yap
//     2.3 Eğer kalan 0 ise, bu sayı i, n'in tam bölenidir.
//     2.4 Tam bölenleri yazdır
// 3. Çıkış