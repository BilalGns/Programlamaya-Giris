#include <stdio.h>
#include <stdlib.h>

//-> Parametre olarak verilen 2 sayının toplamını ve farkını bulan bir fonksiyon yazılacaktır. 
//-> Sayılar main metodunda kullanıcıdan alınarak fonksiyona gönderilecektir, toplam ve fark sonuçları da main metodunda yazılacaktır.

void SumAndDifference(int number1, int number2, int *sum, int *difference);

int main(){

    int number1, number2, sum, difference;

    printf("Enter a first number : ");
    scanf("%d" , &number1);

    printf("Enter a second number : ");
    scanf("%d" , &number2);

    SumAndDifference(number1, number2, &sum, &difference);

    printf("Sum : %d\n", sum);
    printf("Difference : %d\n", difference);
 
    return 0;
}

void SumAndDifference(int number1, int number2, int *sum, int *difference){

    *sum = number1 + number2;
    *difference = number1 - number2;
}