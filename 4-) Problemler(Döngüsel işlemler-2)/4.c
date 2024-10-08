#include <stdio.h>

//? Girilen bir sayının basamak değerlerini yazdırınız

int main(){

    int number, digit;

    printf("Enter a number : ");
    scanf("%d", &number);

    printf("Digit's : ");
    do{
        digit = number % 10 ;
        printf(" %d ", digit);
        number /= 10;
    } while (number > 0);

    return 0;
}