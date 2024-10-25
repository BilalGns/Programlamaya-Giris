#include <stdio.h>

// Bir alışveriş sitesinde 100 TL ve üzerine kargo bedava iken 100 TL altındaki alışverişlerde ise 20 TL kargo ücreti alınmaktadır. 
// Buna göre kullanıcıdan alışveriş tutarını alıp, kargo ücreti dahil ödemesi gereken toplam tutarını ekrana yazdırınız.

int main(){

    float price, totalPrice, cargoPrice = 0x14;

    printf("Enter the purchase amount : ");
    scanf("%f", &price);

    if (price >= 100)
        totalPrice = price;
    else
        totalPrice = price + cargoPrice;

    printf("Total amount : %.2f", totalPrice);
    return 0;
}