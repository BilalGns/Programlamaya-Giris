#include <stdio.h>

//-- Parametre olarak gönderilen iki sayı arasında kalan sayıların toplamını döndüren fonksiyonu yazınız.

int difference(int x, int y);

int main(){

    printf("%d", difference(5,9));

    return 0;
}

int difference(int x, int y){

    int sum = 0;

    for (int i = x+1; i < y; i++){
        sum += i;
    }
    
    return sum;
}