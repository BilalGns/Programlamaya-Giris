#include <stdio.h>

// Girilen sayının Harshad (sayının kendisi rakamları toplamına tam bölünen) olup olmadığını bulunuz.
// (harshad sayılar:1-9, 10, 12, 18, 20, .., 150, 153, …)

int main(){

    int number, sum=0, digit=0;

    printf("Enter a number ");
    scanf("%d", &number);

    int tmp = number;

    while(tmp != 0){
        digit = tmp % 10;
        sum += digit;
        tmp = tmp / 10;
    }

    if (number % sum == 0)
        printf("%d is a Harshad number.", number);
    else 
        printf("%d is not a Harshad number.", number);
    
    return 0;
}