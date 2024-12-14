#include <stdio.h>

//-> Verilen sayının faktöriyelini döndüren fonksiyonu yazınız.

int factorial(int number);

int main(){

    int number;

    printf("Enter a number : ");
    scanf("%d", &number);

    printf("%d! = %d", number, factorial(number));
}

int factorial(int number){

    if (number < 0){
        return 0;
    }
    

    int result = 1;

    for (int i = 1; i <= number; i++){
        result *= i;
    }
    
    return result;
}