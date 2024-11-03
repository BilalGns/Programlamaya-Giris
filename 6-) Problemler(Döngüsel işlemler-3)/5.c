#include <stdio.h>

//? İkilik tabanda verilen bir sayıyı onluk tabana (decimal) çeviren algoritmayı yazınız.

int main(){
    
    int binary, decimal = 0, base=1, digit;

    printf("Enter a binary number : ");
    scanf("%d" , &binary);

    int counter=1;

    while ( binary > 0){

        digit = binary % 10;
        binary /= 10;

        if (digit > 1 || digit < 0)
        {
            printf("You must be entered a binary number.");
            counter = 0;
        }
        
        if (digit == 1)
            decimal += base;
        
        base *= 2;
    }
    
    if (counter)
        printf("Decimal : %d", decimal);    
            
    return 0;
}