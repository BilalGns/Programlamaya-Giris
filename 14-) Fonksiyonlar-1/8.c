#include <stdio.h>

//-> Bir tam sayının kaç basamaklı olduğunu döndüren fonksiyonu yazınız.

int numberOfDigits(int number);

int main(){ 

    int number; 

    printf("Enter a number : ");
    scanf("%d", &number);

    printf("The number entered is %d digits", numberOfDigits(number));

    return 0;
}

int numberOfDigits(int number){

    int counter = 0;

    while (number > 0){
        number /= 10;
        counter++;
    }
    
    return counter;
}