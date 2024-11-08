#include <stdio.h>

// Kullanıcıdan alınan sayının tek veya çift sayı olduğunu, ayrıca tek ise 3’e tam bölünüp bölünmediğini, 
// çift ise 6’ya tam bölünüp bölünmediğini yazdıran programı yazınız.
// (örneğin; 33 girildiğinde “Tek sayi ve 3’e bolunebilir”, 10 girildiğinde “Cift sayi ve 6’ya bolunemez”)

int main(){

    int number;

    printf("Enter a number : ");
    scanf("%d" , &number);

    if (number % 2 == 0){
        printf("%d is an even number", number);
        if (number % 6 == 0){
            printf("\n%d is divisible by 6", number);
        } else {
            printf("\n%d is not divisible by 6", number);
        }
        
    } else {
        printf("%d is an odd number", number);
        if (number % 3 == 0){
            printf("\n%d is divisible by 3", number);
        } else {
            printf("\n%d is not divisible by 3", number);
        }
    } 


    return 0;
}