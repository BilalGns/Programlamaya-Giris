#include <stdio.h>

//-- Fiyat ve kdv oranını parametre olarak alıp toplam fiyatı ekrana yazdıran fonksiyonu yazınız.

void totalPrice(int price, int kdv);

int main(){

    int kdv,price;

    printf("Enter product price : ");
    scanf("%d" , &price);

    printf("Enter the KDV value : ");
    scanf("%d" , &kdv);

    totalPrice(price, kdv);

    return 0;
}

void totalPrice(int price, int kdv){

    float lastPrice = price + (price*kdv)/100; 

    printf("Last price : %.2f", lastPrice);
}