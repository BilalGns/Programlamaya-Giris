#include <stdio.h>

//? Girilen bir sayının Asal Sayı olup olmadığını bulunuz.

int main(){

    int number;

    printf("Enter a number : ");
    scanf("%d", &number);

    if (number <= 0){
        printf("Negative numbers 0 and 1 are not prime.");
        return 0;
    }
    
    for(int i=2; i<=number/2; i++){
        if (number % i == 0){
            printf("The number %d is not prime", number);
            return 0;
        }      
    }
    
    printf("The number %d is prime", number);
    return 0;
}