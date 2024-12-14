#include <stdio.h>

//-> Verilen sayının mutlak değerini döndüren fonksiyonu yazınız

int absoluteValue(int number);

int main(){

    printf("%d", absoluteValue(-6));

    return 0;
}

int absoluteValue(int number){

    if (number > 0){
        return number;
    } else {
        return -number;
    }
}