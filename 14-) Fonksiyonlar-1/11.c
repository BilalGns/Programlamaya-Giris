#include <stdio.h>

//-> Girilen sayının Güçlü Sayı olup olmadığını tanımladığınız faktöriyel fonksiyonunu kullanarak bulunuz.
//-> (Güçlü Sayı: basamak değerlerinin faktöriyellerinin toplamına eşit olan sayı. 145=1!+4!+5!)

int factorial(int number);

int main(){

    int number;

    printf("Enter a number : ");
    scanf("%d", &number);

    int original_number = number;
    int sum = 0;

    while (number > 0){
        int digit = number % 10;
        sum += factorial(digit);
        number /= 10;
    }

    if (original_number == sum){
        printf("The number entered is a strong number.");
    }
    

    return 0;
}

int factorial(int number){

    if (number < 0){
        return 0;
    }

    int result = 1;

    for (int i = 1; i <= number; i++){
        result *= i;
    }
    
    return result;
}