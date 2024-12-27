#include <stdio.h>

//-> Girilen sayının faktöriyelini özyinelemeli fonksiyon ile bulunuz.

int factorial(int number);

int main(){

    int number;

    printf("Enter a number : ");
    scanf("%d", &number);

    printf("%d! = %d", number, factorial(number));
 
    return 0;
}

int factorial(int number){

    if (number < 0){
        printf("Undefined");
        return 0;
    }

    if (number > 1){
        return (number * factorial(number-1));
    } 
    return 1;
}
