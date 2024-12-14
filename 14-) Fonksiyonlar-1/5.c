#include <stdio.h>

//-> Parametre olarak verilen taban ve üs değerlerine göre Üs Alma işlemi gerçekleştiren ve sonucu döndüren fonksiyonu yazınız.

int exponentiation();

int main(){

    int base, exponent;

    printf("Enter a base value : ");
    scanf("%d" , &base);

    printf("Enter a exponent value : ");
    scanf("%d" , &exponent);

    printf("%d", exponentiation(base, exponent));

    return 0;
}

int exponentiation(int base, int exponent){

    int result = 1;

    for (int i = 0; i < exponent; i++){
        result *= base;
    }
    
    return result;
    
}