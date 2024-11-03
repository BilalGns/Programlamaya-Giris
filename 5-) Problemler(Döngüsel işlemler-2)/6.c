#include <stdio.h>

// Palindrom sayı kontrolü(Ör:242 palindromdur, tersten yazılışı kendisine eşittir)

int main(){

    int number, numberCopy,reverse = 0;

    printf("Enter a number : ");
    scanf("%d", &number);

    numberCopy = number;

    while (number != 0){
        int digit = number % 10;
        reverse = reverse * 10 + digit;
        number /= 10;
    }
    
    if(numberCopy == reverse)
        printf("Entered number is a palindrome number");
    else    
        printf("Entered number is not a palindrom number");

    return 0;
}