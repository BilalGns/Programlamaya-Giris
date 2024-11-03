#include <stdio.h>

//? Girilen sayının faktöriyelini hesaplayan program?

int main(){

    int number, sum = 1;

    printf("Enter a number : ");
    scanf("%d", &number);

    if ( number < 0)
        printf("Enter a pozitif number");
    
    for(int i = 1; i <= number; i++){
        sum *= i;
    }

    printf("Factorial : %d", sum);

    return 0;

}