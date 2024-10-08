#include <stdio.h>

//? Fiyat ve kdv oranı girilen ürünün toplam fiyatını ekrana yazdıran algoritmayı yazınız?

int main() {

    int price, kdv ;

    printf("Enter the price of the product : ");
    scanf("%d", &price);

    printf("Enter the KDV price : ");
    scanf("%d", &kdv);
    
    price += (price * kdv)/100;

    printf("%d", price);



    return 0;
}