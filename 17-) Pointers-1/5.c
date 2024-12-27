#include <stdio.h>
#include <stdlib.h>

//-> Parametre olarak verilen 3 sayıdan en büyük ve en küçüğünü bulan fonksiyonu yazınız. En büyük ve en küçük sayıları main içinde yazdırınız.

void MinMaxFinder(int number1, int number2, int number3, int *max, int *min);

int main(){

    int number1, number2, number3;
    int min, max;

    printf("Enter a first number : ");
    scanf("%d" , &number1);

    printf("Enter a second number : ");
    scanf("%d" , &number2);

    printf("Enter a third number : ");
    scanf("%d" , &number3);

    max = number1;
    min = number2;

    MinMaxFinder(number1, number2, number3, &max, &min);

    printf("Max : %d\n", max);
    printf("Min : %d\n", min);
 
    return 0;
}

void MinMaxFinder(int number1, int number2, int number3, int *max, int *min){


    if (number2 > number1){
        *max = number2;
    }
    
    if (number3 > number2)
    {
        *max = number3;
    }

    if (number1 < number2){
        *min = number1;
    }
    
    if (number3 < number2)
    {
        *min = number3;
    }
    
    
}