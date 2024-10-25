#include <stdio.h>
//? Bölme işlemini bölme operatörü kullanmadan hesaplayan programı yazınız.

// Quotient - Bölüm (sonuç)
// Remainder - Kalan (bölme işlemi sonucunda kalan sayı)

int main(){

    int x,y,quotient=0;
    printf("");

    printf("Enter the number to divide : ");
    scanf("%d", &x);

    printf("Enter the divisor number : ");
    scanf("%d", &y);

    do{
        x = x-y;
        quotient +=1;
    } while (x>=y);
    
    printf("Quotient : %d\n", quotient);
    printf("Remainder : %d", x);

    return 0;
}