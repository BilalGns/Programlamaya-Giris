#include <stdio.h>

//-> Kendisine parametre olarak verilen bir tam sayının Asal olup olmadığını kontrol edip Asal ise 1, değilse 0 değerini döndüren fonksiyon

int isPrime(int number);

int main(){

    int number; 

    printf("Enter a number : ");
    scanf("%d" , &number);

    printf("%d", isPrime(number));

    return 0;
}

int isPrime(int number){

    if (number < 2)
        return 0;
    
    for (int i = 2; i <= number/2; i++){
        if (number % i == 0){
            return 0;
        }
    }
    
    return 1;
}