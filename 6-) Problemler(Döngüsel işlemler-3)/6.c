#include <stdio.h>

//? Onluk tabanda verilen bir sayıyı ikilik tabana çeviren algoritmayı yazınız.

int main(){

    int decimal, binary = 0, digit = 1, over = 0;

    printf("Enter a number : ");
    scanf("%d", &decimal);

    int originalDec = decimal;
    
    while (decimal > 0){
        over = decimal % 2;
        binary = binary + (over * digit);
        digit *= 10;
        decimal /= 2;
    }
    
    printf("The binary equivalent of the number %d is %d", originalDec, binary);

    return 0;
}