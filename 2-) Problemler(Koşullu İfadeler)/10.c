#include <stdio.h>

//? Klavyeden girilen sıralı 3 tam sayı ile dik üçgen çizilip çizilemeyeceğini gösteren program
//? kodunu yazınız. A^2 + B^2 = C^2 şartını sağlamalıdır. Örnek: A=3, B=4, C=5 (sayılar sıralı
//? girilmiştir) girildiğinde sonuc “DİK ÜÇGEN ÇİZİLEBİLİR” yazmalıdır.

int main() {

    int x, y, z;
    int big = 0;

    printf("Enter three number : \n");
    scanf("%d%d%d", &x, &y, &z);

    //? Sıralı dediği için herhangi bir büyüklük sıralaması yapılmamıştır.

    if (x*x + y*y == z*z)
        printf("DIK UCGEN CIZILEBILIR");

     else 
        printf("DIK UCGEN CIZILEMEZ");

    return 0;
}