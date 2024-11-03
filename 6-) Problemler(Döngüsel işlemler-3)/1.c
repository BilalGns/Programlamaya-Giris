#include <stdio.h>

//? Girilen sayının Mükemmel Sayı(tam bölenleri toplamı kendisine eşit olan) olup olmadığını bulunuz.(örnek: 6, 28, 496, …)

int main(){
    
    int number, sum = 0;

    printf("Enter a number :");
    scanf("%d", &number);

    for (int i = 1; i < number; i++){
        if (number % i == 0)
            sum += i;
    }

    if (number == sum)
        printf("%d is a perfect number.", number);
    
    return 0;
}