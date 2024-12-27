#include <stdio.h>
#include <stdlib.h>

//-> Girilen sayının faktöriyelini bulan fonksiyon yazınız. Fonksiyonda return kullanılmayacak ve faktöriyel sonucu main de yazdırılacaktır.

void factorial(int *number);

int main(){

    int number;
    
    printf("Enter a number : ");
    scanf("%d", &number);

    printf("%d! = ", number);
    factorial(&number);
    printf("%d", number);

    return 0;
}

void factorial(int *number){

    int length = *number;
    *number = 1;
    for (int i = 2; i <= length; i++){
        *number *= i;
    }
}