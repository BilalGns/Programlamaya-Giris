#include <stdio.h>

// Klavyeden girilen üç farklı tam sayının toplamını sadece 2 değişken kullanarak gerçekleştiren
// programı yazınız. (Değişkenler: int toplam, sayi; şeklinde. Başka değişken kullanılmayacaktır.)

int main() {

    int sayi, toplam = 0;

    printf("Enter a first number : ");
    scanf("%d", &sayi);

    toplam = sayi;

    printf("Enter a second number : ");
    scanf("%d", &sayi);

    toplam += sayi;

    printf("Enter a third number : ");
    scanf("%d", &sayi);

    toplam += sayi;

    printf("Result of the sum : %d", toplam);

    return 0;
}