#include <stdio.h>

//? 1’den 10’a kadar olan sayıların toplamını bulunuz

int main(){

    int sum  = 0;

    for (int i = 1; i <= 10; i++) {
        sum += i;
    }

    printf("Sum : %d", sum);

    return 0;
}