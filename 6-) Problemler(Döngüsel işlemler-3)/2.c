#include <stdio.h>

// Girilen sayının Pronic (ardışık iki sayının çarpımına eşit) olup olmadığını bulunuz. 
// (pronic sayılar: 2 (1x2), 6(2x3), 12(3x4), 20(4x5), …, 132(11x12), 156(12x13), ..)

int main(){
    
    int number;

    printf("Enter a number : ");
    scanf("%d" , &number);

    for (int i = 1; i <= number/2; i++){
        if (number % i == 0){
            if (i * (i+1) == number)
                printf("%d is the pronic number", number);              
        }    
    }
    
    return 0;
}